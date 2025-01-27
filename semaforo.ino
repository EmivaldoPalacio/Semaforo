
#define vermelho 3    //define o pino 3 como LED vermelho
#define amarelo 5      //define o pino 5 como LED amarelo
#define verde 6         //define o pino 6 como LED verde 


void setup() {
  pinMode(vermelho, OUTPUT);      //define o pino como saída
  pinMode(amarelo, OUTPUT);        //define o pino como saída
  pinMode(verde, OUTPUT);            //define o pino como saída

}

void loop() {
  digitalWrite(verde,  HIGH);      
  delay(5000);                  
  digitalWrite(verde,  LOW);
  digitalWrite(amarelo, HIGH);
  delay(1000);
  digitalWrite(amarelo,  LOW);
  digitalWrite(vermelho, HIGH);
  delay(5000);
  digitalWrite(vermelho, LOW);
}
