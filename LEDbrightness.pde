//send mouse co-ordinates to arduino

import processing.serial.*; // serial library (Goto sketch-import library-serial)
 Serial port;               // define object port

void setup(){
    size(200, 200);
    port = new Serial(this, "COM3", 115200);  // initialise serial port [just like Serial.begin(115200);]
}

void draw(){
    background(0, mouseX);
    port.write(mouseX);  // write co-ordinates to serial port
}
