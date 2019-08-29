int led = 13;
int potenciometro = A0;
int potencia = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(potenciometro, INPUT);
  Serial.begin(9600);
}

void loop() {
  potencia = analogRead(potenciometro);
  Serial.print("Valor: ");
  Serial.println(potencia);
  digitalWrite(led, HIGH);
  delay(potencia);
  digitalWrite(led, LOW);
  delay(potencia);
}
