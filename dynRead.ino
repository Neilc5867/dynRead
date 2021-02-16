/**
 * DynRead
 * 
 * read the value from the bike dynamo and print to file.
 * Basic practise and testing for clip and power.
 * 
 */


int dynPin = A0;
int dyn = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(dynPin, INPUT);
  Serial.begin(9600);
  Serial.println("Recieving...");  
}

void loop(){
  //loop this over and over

    // send data only when you receive data:
    dyn = analogRead(dynPin);
    //only print if there's data there
    if(dyn != 0){
      Serial.println(dyn, DEC);
    }
	
	//TODO add logic for LED indicator
}//end loop

