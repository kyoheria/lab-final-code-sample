
const int flexPin = A0; //pin A0 to read analog input

int value; //save analog value

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);       //Begin serial communication
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(flexPin);         //Read and save analog value from potentiometer
  Serial.println(value); 
  delay(100);  
}
