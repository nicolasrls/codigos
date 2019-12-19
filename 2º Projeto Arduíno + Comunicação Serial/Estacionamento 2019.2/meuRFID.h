#ifndef MEURFID_H
#define MEURFID_H
#include "meuServo.h"
#include "meuled.h"
#include "MFRC522.h"
#include "Arduino.h"


class meuRFID : public MFRC522 {
private:
    int SS_PIN, RST_PIN;
public:
   meuRFID(int pin, int pin2) : RFID(SS_PIN, RST_PIN){};
   void iniciaRFID();
   bool leitura(meuRFID a);
};


#endif // MEURFID_H

void meuRFID::iniciaRFID()
{
    PCD_Init();
}

bool meuRFID::leitura(meuRFID a)
{
    if (!a.PICC_IsNewCardPresent() || !a.PICC_ReadCardSerial()) //VERIFICA SE O CARTÃO PRESENTE NO LEITOR É DIFERENTE DO ÚLTIMO CARTÃO LIDO. CASO NÃO SEJA, FAZ
        return; //RETORNA PARA LER NOVAMENTE

      /***INICIO BLOCO DE CÓDIGO RESPONSÁVEL POR GERAR A TAG RFID LIDA***/
      String strID = "";
      for (byte i = 0; i < 4; i++) {
        strID +=
        (a.uid.uidByte[i] < 0x10 ? "0" : "") +
        String(a.uid.uidByte[i], HEX) +
        (i!=3 ? ":" : "");
      }
      strID.toUpperCase();
    /***FIM DO BLOCO DE CÓDIGO RESPONSÁVEL POR GERAR A TAG RFID LIDA***/

      if (strID.indexOf("1A:14:8E:16") >= 0 or strID.indexOf("FC:86:5B:19") >= 0 ) { //SE O ENDEREÇO DA TAG LIDA FOR IGUAL AO ENDEREÇO INFORMADO, FAZ
        return 1;
      }else{ //SENÃO, FAZ (CASO A TAG LIDA NÃO SEJÁ VÁLIDA)
        return 0;
      }
      PICC_HaltA(); //PARADA DA LEITURA DO CARTÃO
      PCD_StopCrypto1(); //PARADA DA CRIPTOGRAFIA NO PCD
}
