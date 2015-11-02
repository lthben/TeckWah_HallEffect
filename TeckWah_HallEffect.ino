/*
 * Author:      Benjamin Low (benjamin.low@digimagic.com.sg)
 * 
 * Description: Hall effect sensor using Allegro's A1121
 *     ----------------------------
 *      \                        /
 *       \   o      o      o    /
 *        \ Vcc    Gnd    Vout /
 *         -------------------
 *         
 *        4.7K resistor across Vcc and Vout.
 *        0.1u capacitor across Vcc and Gnd
 *        
 *        Important: the switch only detects N or S polarity of magnet
 *        Detect distance about 1.75cm. 
 *
 * Last updated: 2 Nov 2015
 */
#define sensorPin 8
#define ledPin 9

void setup() {

        Serial.begin(9600);
}

void loop() {
        
        int sensor_value = digitalRead(sensorPin);
        
        Serial.println(sensor_value);
        if (sensor_value == LOW) {
                digitalWrite(ledPin, HIGH);
        } else {
                digitalWrite(ledPin, LOW);
        }
}
