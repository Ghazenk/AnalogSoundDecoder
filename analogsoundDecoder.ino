int sensor = A0;
int blue = 13;
int green = 12;
int red = 11;
int white = 10;
int yellow = 9;

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  for (int i = 9; i < 14; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int sensor_value = analogRead(sensor);
  Serial.println(sensor_value);

  if(sensor_value == 1 || sensor_value == 19){
    digitalWrite(blue, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    digitalWrite(white, LOW);
    digitalWrite(yellow, LOW);
  }
  else if(sensor_value == 23 ||  sensor_value == 27){
    digitalWrite(blue, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(white, LOW);
    digitalWrite(yellow, LOW);
  }
  else if(sensor_value == 32 || sensor_value == 38){
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(white, LOW);
    digitalWrite(yellow, LOW);
  }
  else if(sensor_value == 47 || sensor_value == 62){
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    digitalWrite(white, HIGH);
    digitalWrite(yellow, LOW);
  }
  else if(sensor_value == 91 || sensor_value == 168 ){
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    digitalWrite(white, LOW);
    digitalWrite(yellow, HIGH);
  }
  else{
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    digitalWrite(white, LOW);
    digitalWrite(yellow, LOW);
  }
  delay(30);
}
