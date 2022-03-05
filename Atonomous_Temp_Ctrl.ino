/*Autonomous Temperature Controller
Developed by T Shreyas
Aim: To develop a self-sensing temperature controller
This program demonstrates a temperature controller which first senses the room temperature, and if the temperature is greater than or equal 
to 20-degree Celsius turns on the fans connected to the motor driver*/
//Header file inclusions
#include "dht.h" //Header file containing functions to work with the DHT11 temperature and humidity sensors
//Constant definitions
#define dht_apin A0 // Analog Pin sensor is connected to
#define In1 9 //Positive pin for fan 1
#define In2 8 //Negative pin for fan 1
#define In3 7 //Positive pin for fan 2
#define In4 6 //Negative pin for fan 2
#define EnA 3 //Enable pin for fan 1
#define EnB 5 //Enable pin for fan 2
dht DHT; //Creating an object DHT of class dht which has functions for sensor manipulations
void setup(){
Serial.begin(9600); //Starts the serial communication (COM)port and sets baud rate to 9600
delay(500);//Delay to let system boot
delay(1000);//Delay to let the sensor stabilize
pinMode(13, OUTPUT);//Sets in-built LED pin to output mode
pinMode(EnA, INPUT);//Sets fan 1 enable pin to input mode
pinMode(EnB, INPUT);//Sets fan 2 enable pin to input mode
}//end "setup()"
void loop(){
//Start of Program
DHT.read11(dht_apin); //reads sensor data
Serial.print((int)DHT.temperature); //Sends sensor's temperature info to LabVIEW via serial port
if(DHT.temperature > 19) //Checks if temperature is above threshold temperature (19 degree Celsius in our case)
{
digitalWrite(EnA, 255);
digitalWrite(EnB, 255);
//Code to turn on both fans
digitalWrite(In1, HIGH);
digitalWrite(In2, LOW);
digitalWrite(In3, HIGH);
digitalWrite(In4, LOW);
//Code to blink LED at a fast rate
digitalWrite(13,HIGH);
delay(250);
digitalWrite(13,LOW);
delay(250);
digitalWrite(13,HIGH);
delay(250);
digitalWrite(13,LOW);
delay(250);
digitalWrite(13,HIGH);
delay(250);
digitalWrite(13,LOW);
delay(250);
digitalWrite(13,HIGH);
delay(250);
digitalWrite(13,LOW);
delay(250);
}
digitalWrite(In1, HIGH);
else
{
digitalWrite(EnA, 255);
digitalWrite(EnB, 255);
//Code to turn off both fans
digitalWrite(In1, LOW);
digitalWrite(In2, LOW);
digitalWrite(In3, LOW);
digitalWrite(In4, LOW);
digitalWrite(13,HIGH);
//Code to blink LED at a slower speed
delay(500);
digitalWrite(13,LOW);
delay(500);
digitalWrite(13,HIGH);
delay(500);
digitalWrite(13,LOW);
delay(500);
}
 }
//End of Program
