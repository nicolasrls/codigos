#include <MFRC522.h> //INCLUSÃO DE BIBLIOTECA
#include "meuServo.h"
#include "meuled.h"
#include "meuRFID.h"

meuRFID rfid(10, 9); //PASSAGEM DE PARÂMETROS REFERENTE AOS PINOS DO RFID
MeuLed verde(2), vermelho(3);
meuServo s(6);

void setup(){
    rfid.iniciaRFID();
    s.iniciarCancela();
}

void loop() {
    if(rfid.leitura(rfid) == 1){
        vermelho.apaga();
        verde.acende();
        s.abrirCancela();
        delay(2000);
        s.fecharCancela();
        verde.apaga();
        vermelho.acende();
    }else{
        vermelho.pisca(100);
        vermelho.pisca(100);
        vermelho.pisca(100);
    }
}
