int relePin = 12;

int ldrPin = A0;

void setup() {

Serial.begin(9600);

pinMode(relePin, OUTPUT);
}

void loop() {

int ldrStatus = analogRead(ldrPin);

Serial.print("sensor = " );            // Imprime o resultado no monitor serial
Serial.println(ldrStatus); 

if (ldrStatus >= 110) { 
digitalWrite(relePin, HIGH);
}
else {
digitalWrite(relePin, LOW);
}

}
