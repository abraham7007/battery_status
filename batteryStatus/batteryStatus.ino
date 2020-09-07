#define led 10

void setup(){
    Serial.begin(9600);
    pinMode(led,OUTPUT);
}

void loop(){
    int sensorValue = analogRead(A0);
    float voltaje = sensorValue*(5/1023.00)*0.93;
    float porcentaje = 25*voltaje;
    Serial.print(voltaje);
    Serial.print("  ");
    Serial.println(porcentaje);
    if (voltaje<2.5){
        digitalWrite(led, HIGH);
    }
    else
    {
        digitalWrite(led, LOW);
    }
    
}
