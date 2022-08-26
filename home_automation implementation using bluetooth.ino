

#define light1 2 //defining the device connected to relay i.e light1 from relay channel 1 connected to pin 2 of arduino
#define light2 3 //similarly light2 from relay channel 2 connected to pin 3 of arduino


void setup() {
  Serial.begin(9600); //here blutooth connected ,blutooth freq from 9600
  pinMode(light1,OUTPUT); //here relay output so the devices connected to it also output
  pinMode(light2,OUTPUT);
}

void loop() { 
  if(Serial.available()>0){ // signal from blutooth 
    char command=Serial.read(); // value from blutooth will be stored in variable command
    switch(command)
    {
      case 'A':digitalWrite(light1,HIGH); //since we used two devices to be controlled here we are using four cases to control them accordingly
      break;
      case 'B':digitalWrite(light1,LOW);
      break;
      case 'C':digitalWrite(light2,HIGH);
      break;
      case 'D':digitalWrite(light2,LOW);
      break;
    }
    Serial.println(command); //command from mobile will be printed in arduino serial monitor
    }
      
     
    }
  
