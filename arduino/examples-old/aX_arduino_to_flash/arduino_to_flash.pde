/*
  Serial String Reader
  Language: Processing

  Reads in a string of characters from a serial port until
  it gets a linefeed (ASCII 10).  Then splits the string into
  sections separated by commas. Then converts the sections to ints,
  and prints them out.
*/

import processing.serial.*;     // import the Processing serial library

int linefeed = 10;              // Linefeed in ASCII
Serial myPort;                  // The serial port

// for writing to file
PrintWriter output;


void setup() {
  // List all the available serial ports
  println(Serial.list());

  // I know that the first port in the serial list on my mac
  // is always my  Arduino module, so I open Serial.list()[0].
  // Change the 0 to the appropriate number of the serial port
  // that your microcontroller is attached to.
  myPort = new Serial(this, Serial.list()[0], 9600);

  // read bytes into a buffer until you get a linefeed (ASCII 10):
  myPort.bufferUntil(linefeed);
  
  
  // Create a new file in the sketch directory to write to
  output = createWriter("output.txt"); 
}

void draw() {
  // twiddle your thumbs
}

// serialEvent  method is run automatically by the Processing applet
// whenever the buffer reaches the  byte value set in the bufferUntil()
// method in the setup():

void serialEvent(Serial myPort) {
  // read the serial buffer:
  String myString = myPort.readStringUntil(linefeed);
  
  
  output = createWriter("output.txt"); 
  print(myString);
  output.print(myString); // Write the coordinate to the file
  output.flush(); // Writes the remaining data to the file
  output.close(); // Finishes the file
  
  
  /*
  // if you got any bytes other than the linefeed:
  if (myString != null) {

    myString = trim(myString);

    // split the string at the commas
    // and convert the sections into integers:
    int sensors[] = int(split(myString, ','));

    // print out the values you got:
    for (int sensorNum = 0; sensorNum < sensors.length; sensorNum++) {
      print("Sensor " + sensorNum + ": " + sensors[sensorNum] + "\t");
    }
    // add a linefeed after all the sensor values are printed:
    println();
  }
  */
}







