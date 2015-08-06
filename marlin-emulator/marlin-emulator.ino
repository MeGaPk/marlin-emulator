/*
  author: Ivan Gaydamakin
 */

char inputString[256];
char len = 0;


void setup() {
  // initialize serial:
  Serial.begin(250000);
}
const int extruder_temperature = 21;
const int bed_temperature = 20;

void loop() {
}

void serialEvent() {
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    inputString[len++] = inChar;

    if (inChar == '\n') {
      inputString[len++] = 0;
      process_command();
      len = 0;
    }
  }
}

void process_command() {
  //  Serial.print("|");
  //  Serial.print(inputString);
  //  Serial.println("|");
  if (strstr (inputString, "M") != NULL) {
    execute_m_gcode();
  }
  else
  {
    Serial.println("ok");
  }
}


void execute_m_gcode() {
  if (strstr (inputString, "M105") != NULL) {
    //ok T:35.2 /0.0 B:0.0 /0.0 T0:35.2 /0.0 @:0 B@:0
    Serial.print("ok T:");
    Serial.print(extruder_temperature);
    Serial.print(" /0.0");
    Serial.print(" B:");
    Serial.print(bed_temperature);
    Serial.print(" /0.0");
    Serial.print(" T0:");
    Serial.print(extruder_temperature);
    Serial.print(" /0.0");
    Serial.print(" @:0 B@:0");

    Serial.println();
  }
  else {
    Serial.println("ok");
  }
}