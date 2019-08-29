//Cria uma variável led porta 13 para o LED
int led = 13;

//Cria uma variável botao para a porta 12
int botao = 12;

void setup() {
  //Configura a porta do LED como o tipo de saída (OUTPUT)
  pinMode(led, OUTPUT);
  
  //Configura a porta do botao como o tipo de entrada (INPUT)
  pinMode(botao, INPUT);
}


void loop() {
  //Captura se o botao está pressionado
  int acionado = digitalRead(botao);
  
  //Verifica se o botão está pressionado (HIGH)
  if(acionado == HIGH){
    //Se estiver pressionado, liga o LED
    digitalWrite(led, HIGH);   
  }else{
    //Se não estiver, desliga o LED
    digitalWrite(led, LOW);  
  }
}
