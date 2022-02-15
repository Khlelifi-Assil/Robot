void setup()
{
  //Serial Port 
 Serial.begin(9600);

//Ecran Setup 
   // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.
  display.display();
  // Clear the buffer
  display.clearDisplay();
demarrage();
 
 
  //Laser Setup
  pinMode(laserPin, OUTPUT);

  //Motors Setup
 
  pinMode(IN_RED1, INPUT);
  pinMode(IN_RED2, INPUT);
  pinMode(DA, OUTPUT);
  pinMode(DB, OUTPUT);
  pinMode(GA, OUTPUT);
  pinMode(GB, OUTPUT);

  //Camera Setup
  arduinoUnoInut();
  camInit();
  setRes();
  setColor();
  wrReg(0x11, 2);
}
