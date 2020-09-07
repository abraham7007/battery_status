#define LEDGREEN 2
#define LEDYELLOW 3
#define LEDRED 4
#define ANALOGPILA 0
// VARIABLES
int analogValor = 0;
float voltaje = 0;
int ledDelay = 800;
// UMBRALES
float maximo = 1.5;
float maximo = 1.3;
float maximo = 0.3;
void setup(){
  Serial.begin(9600);
  pinMode(LEDGREEN, OUTPUT);
  pinMode(LEDYELLOW, OUTPUT);
  pinMode(LEDRED, OUTPUT); 
}
void loop(){
  analogValor = analogRead();
  voltaje = analogValor*0.0048;
  Serial.print("voltaje");
  Serial.println(voltaje);
  if(voltaje >= maximo){
    digitalWrite(LEDGREEN, HIGH);  
    delay(ledDelay);
    digitalWrite(LEDGREEN, LOW);  
  }
  else if (voltaje < maximo && voltaje > medio){
    digitalWrite(LEDYELLOW,HIGH);
    delay(ledDelay);
    digitalWrite(LEDYELLOW,LOW);
  }
  else if (voltaje < medio && voltaje > minimo){
    digitalWrite(LEDRED,HIGH);
    delay(ledDelay);
    digitalWrite(LEDRED,LOW);    
  }
  digitalWrite(LEDGREEN, LOW);
  digitalWrite(LEDYELOOW, LOW);
  digitalWrite(LEDRED, LOW);


}

