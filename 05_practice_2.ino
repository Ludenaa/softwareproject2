#define PIN_LED 7
unsigned int toggle;

void setup(){
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial){
    ;
  }
}

void loop(){
  toggle = 0;
  digitalWrite(PIN_LED, toggle);
  delay(1000);
  for(int i = 0; i < 11; i++){
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(100);
  }
  while(1){}
}

int toggle_state(int toggle){
  if(toggle == 0){
    return 1;
  }
  return 0;
}
