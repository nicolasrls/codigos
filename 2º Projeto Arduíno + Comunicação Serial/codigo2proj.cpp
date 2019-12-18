#include <SPI.h> //INCLUSÃO DE BIBLIOTECA
#include <MFRC522.h> //INCLUSÃO DE BIBLIOTECA
#include <Servo.h> //INCLUSÃO DE BIBLIOTECA
 

 
#define SS_PIN 10 //PINO SDA
#define RST_PIN 9 //PINO DE RESET
 
MFRC522 rfid(SS_PIN, RST_PIN); //PASSAGEM DE PARÂMETROS REFERENTE AOS PINOS
 
Servo s; //OBJETO DO TIPO SERVO
int pos; //POSIÇÃO DO SERVO
 
const int pinoLedVerde = 2; //PINO DIGITAL REFERENTE AO LED VERDE
const int pinoLedVermelho = 3; //PINO DIGITAL REFERENTE AO LED VERMELHO
const int pinoServo = 6; // PINO DIGITAL REFERENTE AO SERVO MOTOR
 
byte anguloCancelaFechada = 69; //VALOR DO ÂNGULO PARA CANCELA FECHADA
byte anguloCancelaAberta = 159; //VALOR DO ÂNGULO PARA CANCELA ABERTA
 
void setup(){
 
  
  SPI.begin(); //INICIALIZA O BARRAMENTO SPI
  rfid.PCD_Init(); //INICIALIZA MFRC522
 
  s.attach(pinoServo); //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO SERVO
  s.write(69); //INICIA O MOTOR NA POSIÇÃO 0º
  
  pinMode(pinoLedVerde, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoLedVermelho, OUTPUT); //DEFINE O PINO COMO SAÍDA
  
  digitalWrite(pinoLedVerde, HIGH); //LED INICIA DESLIGADO
  digitalWrite(pinoLedVermelho, LOW); //LED INICIA DESLIGADO
}
 
void loop() {
  leituraRfid(); //CHAMA A FUNÇÃO RESPONSÁVEL PELA VALIDAÇÃO DA TAG RFID
}
 
//FUNÇÃO DE VALIDAÇÃO DA TAG RFID
void leituraRfid(){
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) //VERIFICA SE O CARTÃO PRESENTE NO LEITOR É DIFERENTE DO ÚLTIMO CARTÃO LIDO. CASO NÃO SEJA, FAZ
    return; //RETORNA PARA LER NOVAMENTE    
//    delay(1000); //INTERVALO DE 4 SEGUNDOS
 
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

  if (strID.indexOf("1A:14:8E:16") >= 0 or strID.indexOf("FC:86:5B:19") >= 0 ) { //SE O ENDEREÇO DA TAG LIDA FOR IGUAL AO ENDEREÇO INFORMADO, FAZ
    digitalWrite(pinoLedVermelho, HIGH); //LIGA O LED VERMELHO
    digitalWrite(pinoLedVerde, LOW); //LIGA O LED VERDE    
    delay(2000); //INTERVALO DE 4 SEGUNDOS
    abrirCancela(); //CHAMA A FUNÇÃO RESPONSÁVEL POR ABRIR A CANCELA
    delay(2000); //INTERVALO DE 6 SEGUNDOS
    fecharCancela(); //CHAMA A FUNÇÃO RESPONSÁVEL POR FECHAR A CANCELA
    digitalWrite(pinoLedVerde, HIGH); //DESLIGA O LED VERDE
    digitalWrite(pinoLedVermelho, LOW); //LIGA O LED VERMELHO
  }else{ //SENÃO, FAZ (CASO A TAG LIDA NÃO SEJÁ VÁLIDA)
    digitalWrite(pinoLedVermelho, LOW); 
    delay(100); 
    digitalWrite(pinoLedVermelho, HIGH); 
    delay(100);
    digitalWrite(pinoLedVermelho, LOW); 
    delay(100);
    digitalWrite(pinoLedVermelho, HIGH); 
    delay(100);
    digitalWrite(pinoLedVermelho, LOW); 
    delay(100);
    digitalWrite(pinoLedVermelho, HIGH); 
    delay(100);
    digitalWrite(pinoLedVermelho, LOW); 
    delay(100);      
  }
  
 
  rfid.PICC_HaltA(); //PARADA DA LEITURA DO CARTÃO
  rfid.PCD_StopCrypto1(); //PARADA DA CRIPTOGRAFIA NO PCD
  }
 
//FUNÇÃO PARA ABRIR A CANCELA
void abrirCancela(){
  for(pos = anguloCancelaFechada; pos < anguloCancelaAberta; pos++){ //PARA "pos" IGUAL A "anguloCancelaFechada",
    //ENQUANTO "pos" MENOR QUE "anguloCancelaAberta", INCREMENTA "pos"
    s.write(pos); //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
    delay(12); //INTERVALO DE 15 MILISEGUNDOS
  }
}
 
//FUNÇÃO PARA FECHAR A CANCELA
void fecharCancela(){ //
  for(pos = anguloCancelaAberta; pos >= anguloCancelaFechada; pos--){ //PARA "pos" IGUAL A "anguloCancelaAberta",
    //ENQUANTO "pos" MAIOR OU IGUAL "anguloCancelaFechada", DECREMENTA "pos"
    s.write(pos); //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
    delay(12); //INTERVALO DE 15 MILISEGUNDOS
  }
  
}
