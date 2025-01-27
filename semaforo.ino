
#define vermelho 3
#define amarelo 5
#define verde 6


void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);

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
