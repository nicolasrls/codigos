#include <SPI.h>
#include "meuRFID.h"


#define SS_PIN 10 //PINO SDA
#define RST_PIN 9 //PINO DE RESET

MeuLed verde(2), vermelho(3);
meuRFID rfid(SS_PIN, RST_PIN);  //PASSAGEM DE PARÂMETROS REFERENTE AOS PINOS DO RFID
meuServo s(6);

void setup(){
  SPI.begin(); //INICIALIZA O BARRAMENTO SPI
  rfid.iniciaRFID(); //INICIALIZA MFRC522
  s.iniciarCancela();
  vermelho.acende();
  verde.apaga();
}

void loop() {
  leituraRfid(); //CHAMA A FUNÇÃO RESPONSÁVEL PELA VALIDAÇÃO DA TAG RFID
}

//FUNÇÃO DE VALIDAÇÃO DA TAG RFID
void leituraRfid(){
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) //VERIFICA SE O CARTÃO PRESENTE NO LEITOR É DIFERENTE DO ÚLTIMO CARTÃO LIDO. CASO NÃO SEJA, FAZ
    return; //RETORNA PARA LER NOVAMENTE

  /***INICIO BLOCO DE CÓDIGO RESPONSÁVEL POR GERAR A TAG RFID LIDA***/
  String strID = "";
  for (byte i = 0; i < 4; i++) {
    strID +=
    (rfid.uid.uidByte[i] < 0x10 ? "0" : "") +
    String(rfid.uid.uidByte[i], HEX) +
    (i!=3 ? ":" : "");
  }
  strID.toUpperCase();
/***FIM DO BLOCO DE CÓDIGO RESPONSÁVEL POR GERAR A TAG RFID LIDA***/

  if (strID.indexOf("1A:14:8E:16") >= 0 or strID.indexOf("FC:86:5B:19") >= 0 or strID.indexOf("02:3F:11:1F") >= 0 or strID.indexOf("59:42:17:BF") >= 0 or strID.indexOf("09:13:C7:7E") >= 0 ) { //SE O ENDEREÇO DA TAG LIDA FOR IGUAL AO ENDEREÇO INFORMADO, FAZ
    vermelho.apaga();
    verde.acende();
    delay(2000);
    s.abrirCancela(); //CHAMA A FUNÇÃO RESPONSÁVEL POR ABRIR A CANCELA
    delay(2000);
    s.fecharCancela(); //CHAMA A FUNÇÃO RESPONSÁVEL POR FECHAR A CANCELA
    verde.apaga();
    vermelho.acende();
  }else{ //SENÃO, FAZ (CASO A TAG LIDA NÃO SEJÁ VÁLIDA)
    vermelho.pisca(100);
    vermelho.acende();
  }
  rfid.PICC_HaltA(); //PARADA DA LEITURA DO CARTÃO
  rfid.PCD_StopCrypto1(); //PARADA DA CRIPTOGRAFIA NO PCD
  }

