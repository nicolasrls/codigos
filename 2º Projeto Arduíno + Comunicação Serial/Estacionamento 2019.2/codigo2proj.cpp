#include <SPI.h>
#include "meuRFID.h"
#include "usuarios.h"

//-----------definição dos pinos, dos users e das tags RFID's aceitas para abrir a cancela--------//

#define vd 2 //Pino do led vermelho **cancela**
#define vm 3 //Pino do led verde **cancela**
#define srv 6 //Pino do servo
#define RST_PIN 9 //PINO DE RESET
#define SS_PIN 10 //PINO SDA

#define SR_EDGAR "59:42:17:BF"
#define SR_LEANDRO "02:3F:11:1F"
#define SR_LACOUTH "1A:14:8E:16"
#define SR_RIBEIRO "A9:ED:1B:BF"
#define SR_LIMA "69:E0:88:C8"

Usuarios nicolas("Nicolas", SR_RIBEIRO), leandro("Leandro", SR_LEANDRO),
         danubio("Danubio", SR_EDGAR), lacouth("Patric Lacouth", SR_LACOUTH),
         victor("Victor Lima", SR_LIMA);
MeuLed verde(vd), vermelho(vm);
meuRFID rfid(SS_PIN, RST_PIN);  //PASSAGEM DE PARÂMETROS REFERENTE AOS PINOS DO RFID
meuServo s(srv);

void setup() {
  SPI.begin(); //INICIALIZA O BARRAMENTO SPI
  rfid.iniciaRFID(); //INICIALIZA MFRC522
  s.iniciarCancela();
  vermelho.acende();
  verde.apaga();
}

void loop() {
  leituraRfid(); //CHAMA A FUNÇÃO RESPONSÁVEL PELA VALIDAÇÃO DA TAG RFID
}



//********************* DECLARAÇÃO DE FUNÇÕES ********************




//FUNÇÃO DE VALIDAÇÃO DA TAG RFID
void leituraRfid() {
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) //VERIFICA SE O CARTÃO PRESENTE NO LEITOR É DIFERENTE DO ÚLTIMO CARTÃO LIDO. CASO NÃO SEJA, FAZ
    return; //RETORNA PARA LER NOVAMENTE

  /***INICIO BLOCO DE CÓDIGO RESPONSÁVEL POR GERAR A TAG RFID LIDA***/
  String strID = "";
  for (byte i = 0; i < 4; i++) {
    strID +=
      (rfid.uid.uidByte[i] < 0x10 ? "0" : "") +
      String(rfid.uid.uidByte[i], HEX) +
      (i != 3 ? ":" : "");
  }
  strID.toUpperCase();
  /***FIM DO BLOCO DE CÓDIGO RESPONSÁVEL POR GERAR A TAG RFID LIDA***/

  if (strID.indexOf(SR_LEANDRO) >= 0) {
    leandro.mudaStatus();
    vermelho.apaga();
    verde.acende();
    delay(2000);
    s.abrirCancela(); //CHAMA A FUNÇÃO RESPONSÁVEL POR ABRIR A CANCELA
    delay(2000);
    s.fecharCancela();
    verde.apaga();
    vermelho.acende();
  }
  else if (strID.indexOf(SR_RIBEIRO) >= 0) {
    nicolas.mudaStatus();
    vermelho.apaga();
    verde.acende();
    delay(2000);
    s.abrirCancela(); //CHAMA A FUNÇÃO RESPONSÁVEL POR ABRIR A CANCELA
    delay(2000);
    s.fecharCancela();
    verde.apaga();
    vermelho.acende();
  }
  else if (strID.indexOf(SR_EDGAR) >= 0) {
    danubio.mudaStatus();
    vermelho.apaga();
    verde.acende();
    delay(2000);
    s.abrirCancela(); //CHAMA A FUNÇÃO RESPONSÁVEL POR ABRIR A CANCELA
    delay(2000);
    s.fecharCancela();
    verde.apaga();
    vermelho.acende();
  }
  else if (strID.indexOf(SR_LACOUTH) >= 0) {
    lacouth.mudaStatus();
    vermelho.apaga();
    verde.acende();
    delay(2000);
    s.abrirCancela(); //CHAMA A FUNÇÃO RESPONSÁVEL POR ABRIR A CANCELA
    delay(2000);
    s.fecharCancela();
    verde.apaga();
    vermelho.acende();
  }
  else if (strID.indexOf(SR_LIMA) >= 0) {
    victor.mudaStatus();
    vermelho.apaga();
    verde.acende();
    delay(2000);
    s.abrirCancela(); //CHAMA A FUNÇÃO RESPONSÁVEL POR ABRIR A CANCELA
    delay(2000);
    s.fecharCancela();
    verde.apaga();
    vermelho.acende();
  }
  else { //SENÃO, FAZ (CASO A TAG LIDA NÃO SEJÁ VÁLIDA)
    vermelho.pisca(100);
    vermelho.acende();
  }
  rfid.PICC_HaltA(); //PARADA DA LEITURA DO CARTÃO
  rfid.PCD_StopCrypto1(); //PARADA DA CRIPTOGRAFIA NO PCD
}
