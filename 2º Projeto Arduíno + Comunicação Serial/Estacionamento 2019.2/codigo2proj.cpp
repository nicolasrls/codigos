#include <SPI.h>
#include <ArduinoJson.h>
#include "meuestacionamento.h"

//-----------definição dos pinos, dos users e das tags RFID's aceitas para abrir a cancela--------//

#define vgvm 14
#define vgvd 15
#define vg2vm 16
#define vg2vd 17
#define vg3vm 18
#define vg3vd 19
#define vg4vm 7
#define vg4vd 8
#define vg5vm 5
#define vg5vd 4

#define vd 2 //Pino digital do led vermelho **cancela**
#define vm 3 //Pino digital do led verde **cancela**
#define srv 6 //Pino do servo
#define RST_PIN 9 //PINO DE RESET
#define SS_PIN 10 //PINO SDA
#define SR_EDGAR "59:42:17:BF"
#define SR_LEANDRO "02:3F:11:1F"
#define SR_LACOUTH "1A:14:8E:16"
#define SR_RIBEIRO "A9:ED:1B:BF"
#define SR_LIMA "69:E0:88:C8"

const int capacity = JSON_OBJECT_SIZE(3);
StaticJsonDocument<capacity> doc;

Usuarios nicolas("Nicolas", SR_RIBEIRO), leandro("Leandro", SR_LEANDRO),
danubio("Danubio", SR_EDGAR), lacouth("Patric Lacouth", SR_LACOUTH),
victor("Victor Lima", SR_LIMA);
MeuLed cancela(vd,vm), vg1(vgvd,vgvm), vg2(vg2vd,vg2vm),vg3(vg3vd,vg3vm),vg4(vg4vd,vg4vm),vg5(vg5vd,vg5vm);
meuRFID rfid(SS_PIN, RST_PIN);  //PASSAGEM DE PARÂMETROS REFERENTE AOS PINOS DO RFID
meuServo s(srv);
MeuEstacionamento vaga1(1,nicolas), vaga2(2,leandro),vaga3(3,danubio),vaga4(4,lacouth),vaga5(5,victor);

void setup() {
    Serial.begin(115200); // INICIA O MONITOR SERIAL
    SPI.begin(); //INICIALIZA O BARRAMENTO SPI
    rfid.iniciaRFID(); //INICIALIZA O LEITOR
    s.iniciarCancela();
    cancela.acende();
    vaga1.iniciaVaga(vg1);
    vaga2.iniciaVaga(vg2);
    vaga3.iniciaVaga(vg3);
    vaga4.iniciaVaga(vg4);
    vaga5.iniciaVaga(vg5);
}

void loop() {
    envioSerial();
    leituraRfid(); //CHAMA A FUNÇÃO RESPONSÁVEL PELA VALIDAÇÃO DA TAG RFID
    leituraSerial();
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


    if (strID.indexOf(SR_RIBEIRO) >= 0) {
        vaga1.mudaEstado(vg1);
        vaga1.printSerial();
        cancela.apaga();
        cancela.acende2();
        s.usarCancela();
        cancela.apaga2();
        cancela.acende();
        doc["Vaga 1"] == vaga1.getEstadoVaga();
        serializeJson(doc,Serial);
    }
    else if (strID.indexOf(SR_LEANDRO) >= 0) {
        vaga2.mudaEstado(vg2);
        vaga2.printSerial();
        cancela.apaga();
        cancela.acende2();
        s.usarCancela();
        cancela.apaga2();
        cancela.acende();
        doc["Vaga 2"] == vaga2.getEstadoVaga();
        serializeJson(doc,Serial);
    }
    else if (strID.indexOf(SR_EDGAR) >= 0) {
        vaga3.mudaEstado(vg3);
        vaga3.printSerial();
        cancela.apaga();
        cancela.acende2();
        s.usarCancela();
        cancela.apaga2();
        cancela.acende();
        doc["Vaga 3"] == vaga3.getEstadoVaga();
        serializeJson(doc,Serial);
    }
    else if (strID.indexOf(SR_LACOUTH) >= 0) {
        vaga4.mudaEstado(vg4);
        vaga4.printSerial();
        cancela.apaga();
        cancela.acende2();
        s.usarCancela();
        cancela.apaga2();
        cancela.acende();
        doc["Vaga 4"] == vaga4.getEstadoVaga();
        serializeJson(doc,Serial);
    }
    else if (strID.indexOf(SR_LIMA) >= 0) {
        vaga5.mudaEstado(vg5);
        cancela.apaga();
        cancela.acende2();
        s.usarCancela();
        cancela.apaga2();
        cancela.acende();
        doc["Vaga 5"] == vaga5.getEstadoVaga();
        serializeJson(doc,Serial);
    }
    else { //SENÃO, FAZ (CASO A TAG LIDA NÃO SEJÁ VÁLIDA)
        cancela.pisca(100);
        cancela.acende();
    }
    rfid.PICC_HaltA(); //PARADA DA LEITURA DO CARTÃO
    rfid.PCD_StopCrypto1(); //PARADA DA CRIPTOGRAFIA NO PCD
}

void leituraSerial(){
    if( Serial.available() > 0 ){
       deserializeJson(doc,Serial);
       if( doc["CNC"] == 1){
           cancela.apaga();
           cancela.acende2();
           s.usarCancela();
           cancela.apaga2();
           cancela.acende();
       }else if(doc["CNC"] == 0){
           cancela.apaga();
           cancela.acende2();
           s.usarCancela();
           cancela.apaga2();
           cancela.acende();
       }else if( doc["Vaga 1"] == 0){
           vaga1.mudaEstado(vg1);
           doc["Vaga 1"] == vaga1.getEstadoVaga();
           serializeJson(doc,Serial);
       }else if(doc["Vaga 1"] == 1){
           vaga1.mudaEstado(vg1);
           doc["Vaga 1"] == vaga1.getEstadoVaga();
           serializeJson(doc,Serial);
       }else if( doc["Vaga 2"] == 0){
           vaga2.mudaEstado(vg2);
           doc["Vaga 2"] == vaga2.getEstadoVaga();
           serializeJson(doc,Serial);
       }else if(doc["Vaga 2"] == 1){
           vaga2.mudaEstado(vg2);
           doc["Vaga 2"] == vaga2.getEstadoVaga();
           serializeJson(doc,Serial);
       }else if( doc["Vaga 3"] == 0){
           vaga3.mudaEstado(vg3);
           doc["Vaga 3"] == vaga3.getEstadoVaga();
           serializeJson(doc,Serial);
       }else if(doc["Vaga 3"] == 1){
           vaga3.mudaEstado(vg3);
           doc["Vaga 3"] == vaga3.getEstadoVaga();
           serializeJson(doc,Serial);
       }else if( doc["Vaga 4"] == 0){
           vaga4.mudaEstado(vg4);
           doc["Vaga 4"] == vaga4.getEstadoVaga();
           serializeJson(doc,Serial);
       }else if(doc["Vaga 4"] == 1){
           vaga4.mudaEstado(vg4);
           doc["Vaga 4"] == vaga4.getEstadoVaga();
           serializeJson(doc,Serial);
       }else if( doc["Vaga 5"] == 0){
           vaga5.mudaEstado(vg5);
           doc["Vaga 5"] == vaga5.getEstadoVaga();
           serializeJson(doc,Serial);
       }else if(doc["Vaga 5"] == 1){
           vaga5.mudaEstado(vg5);
           doc["Vaga 5"] == vaga5.getEstadoVaga();
           serializeJson(doc,Serial);
       }
     }
}

void envioSerial(){
    doc["Vaga 1"] == vaga1.getEstadoVaga();
    doc["Vaga 2"] == vaga2.getEstadoVaga();
    doc["Vaga 3"] == vaga3.getEstadoVaga();
    doc["Vaga 4"] == vaga4.getEstadoVaga();
    doc["Vaga 5"] == vaga5.getEstadoVaga();
}

