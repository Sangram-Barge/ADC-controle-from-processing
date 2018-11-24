const int ledPin = D4; // define a pin for led

void setup(){
    Serial.begin(115200);  // start the serial port at same baud rate as processing is initialised
    pinMode(ledPin, OUTPUT);
}

void loop(){
    //wait until the data is available on serial port
    if(Serial.available() > 0){
        int val = byte(Serial.read());    //the data sent from the processing is in form of byte. Convert the byte into int for further use. 
        map(val, 0, 400, 0, 1023);`       // map the data from 0 to 1023
        analogWrite(ledPin, val);         // write the data as analog value on led pin to change its brightness.
    }
}