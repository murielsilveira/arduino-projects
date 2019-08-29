//Identifica em qual pino o LED foi ligado
int led1 = 7;
int led2 = 3;

void setup() {
  //Configura o pino 7 como saída
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}


void loop() {
  //Liga o LED
  digitalWrite(led1, HIGH);
  delay(50);
  digitalWrite(led2, HIGH);

  delay(100);

  //Desliga o LED
  digitalWrite(led1, LOW);
  delay(50);
  digitalWrite(led2, LOW);

  delay(100);
}
