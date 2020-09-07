#define led 10

void setup(){
    Serial.begin(9600);
    pinMode(led,OUTPUT);
}

void loop(){
    int sensorValue = analogRead(A0);
    float voltaje = sensorValue*(5/1023.00)*2.70;
    Serial.println(voltaje);
    if (voltaje<9){
        digitalWrite(led, HIGH);
    }
    else
    {
        digitalWrite(led, LOW);
    }
    
}