// Matt Reamer and Donnie Plumly
//    Punching Bag Prototype
//    Brandcenter Fall 2013 /
    

int ledPinA = 7;           // LED is connected to digital pin 7
int ledPinB = 8;           // LED is connected to digital pin 8
int ledPinC = 9;           // LED is connected to digital pin 9
int ledPinD = 10;           // LED is connected to digital pin 10
int ledPinE = 11;           // LED is connected to digital pin 11
int sensorPin = 0;         // Stretch sensor is connected to analog pin 0
int sensorValue;           // variable to store the value coming from the sensor
long previousMillis = 0;        // will store last time LED was updated

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 100;           // interval at which to blink (milliseconds)

void setup()
{
  pinMode(ledPinA, OUTPUT);   // sets the ledPin to be an output
  pinMode(ledPinB, OUTPUT);   // sets the ledPin to be an output
  pinMode(ledPinC, OUTPUT);   // sets the ledPin to be an output
  pinMode(ledPinD, OUTPUT);   // sets the ledPin to be an output
  pinMode(ledPinE, OUTPUT);   // sets the ledPin to be an output
  Serial.begin(9600);           //initialize the serial port
}   

void loop()   // run over and over again
{
  sensorValue = analogRead(sensorPin);   // read the value from the sensor
  
    Serial.print("                     Sensor Value: ");
  Serial.println(sensorValue);

/*  delay(100);   // delay for 1/10 of a second*/

 unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;  
    
    
    
  {if(sensorValue>900 && sensorValue<1022){ 
    Serial.print("HIGH");
    digitalWrite(ledPinE, HIGH); //Turn LED on
    delay(4000);   // delay for 4 seconds
    }
      else{
        digitalWrite(ledPinE, LOW);
           }
    if(sensorValue>750 && sensorValue<900){
    Serial.print("Medium High");
    digitalWrite(ledPinD, HIGH); //Turn LED on
    delay(4000);   // delay for 4 seconds
    }
      else{
        digitalWrite(ledPinD, LOW);
           }
    if(sensorValue>550 && sensorValue<750){ 
    Serial.print("Medium low");
    digitalWrite(ledPinC, HIGH); //Turn LED on
    delay(4000);   // delay for 4 seconds
    }
      else{
        digitalWrite(ledPinC, LOW);
           }
    if(sensorValue>350 && sensorValue<550){ 
    Serial.print("Medium");
    digitalWrite(ledPinB, HIGH); //Turn LED on
    delay(4000);   // delay for 4 seconds
    }
      else{
        digitalWrite(ledPinB, LOW);
           }
    if(sensorValue>100 && sensorValue<350){ 
    Serial.print("Low");
    digitalWrite(ledPinA, HIGH); //Turn LED 7 on
    delay(4000);   // delay for 4 seconds
  }
    else{
        digitalWrite(ledPinA, LOW);
           }
  
}
}
}
