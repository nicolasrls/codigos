#ifndef MEURFID_H
#define MEURFID_H
#include "meuServo.h"
#include "meuled.h"
#include "MFRC522.h"
#include "Arduino.h"


class meuRFID : public MFRC522 {

public:
   meuRFID(int SS_PIN, int RST_PIN) : MFRC522(SS_PIN, RST_PIN){};
   void iniciaRFID();
   void leitura();


};


#endif // MEURFID_H

void meuRFID::iniciaRFID()
{
    meuRFID::PCD_Init();
}

void meuRFID::leitura()
{
    if (!PICC_IsNewCardPresent() || !PICC_ReadCardSerial()){
        return;
    }
}

