#define ldr A0
#define VM 5
#define VD 4

float R;

void setup(){
  Serial.begin(9600); //Inicializa a comunicação serial
  pinMode(ldr, INPUT); //Define o pino A0 como saida
  pinMode(VM, OUTPUT);
  pinMode(VD, OUTPUT);
}

void loop(){
  R = map(analogRead(ldr),0,492,10000,0); // Lê e converte o valor do LDR
  Serial.print(R);
  Serial.println(" Ohms");
  if((R == 0)or(R <= 4500)){
    digitalWrite(VD, HIGH);
    digitalWrite(VM, LOW);
  }else{
    digitalWrite(VM, HIGH);
    digitalWrite(VD, LOW);
  }
  delay(100);
}

