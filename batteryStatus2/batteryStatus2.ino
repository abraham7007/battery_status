#define ANALOGPILA 0
// VARIABLES
int analogValor = 0;
float voltaje = 0;
int ledDelay = 800;
// UMBRALES
float maximo = 4.2;
float medio = 3.7;
float minimo = 2.75;
void setup(){
  Serial.begin(9600);
}
void loop(){
  analogValor = analogRead(A0);
  voltaje = analogValor*0.0048;
  Serial.print("voltaje");
  Serial.println(voltaje);
}
