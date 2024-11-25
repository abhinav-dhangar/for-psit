#include <Arduino.h>

int ledPin = 13;
int ldrPin = 4;

void setup()
{
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    pinMode(ldrPin, INPUT);
    delay(1000);
}

void loop()
{

    int ldrValue = analogRead(ldrPin);

    if (ldrValue < 100)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }
    delay(100);
}