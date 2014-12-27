/*
 Author: MeGaPk (Ivan)
 */

char inputData[50];
char len=0;


void setup() {
  // initialize serial:
  Serial.begin(115200);
}

void loop() {
}

void serialEvent() {
  while (Serial.available()) {
    char inChar = (char)Serial.read(); 

    if (inChar == '\n') {
      inputData[len]=0;
      process_command();
      len = 0;
    }
    else if(len<sizeof(inputData)-1){
      inputData[len++] = inChar;
    }
    else{
      len = 0;
    }
  }
}

void process_command(){
  Serial.println("ok");
}


















