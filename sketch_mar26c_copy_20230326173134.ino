const int led[8]={3,4,5,6,7,8,9,10};
int d=200;

void setup() {
  for(int i=0; i<8; i++)
   pinMode(led[i], OUTPUT);

}

void loop() {
for(int x=0; x<8; x++)
digitalWrite(led[x],HIGH);
 delay(d);

  for(int x=0; x<8; x++){
    for(int y=0; y<8; y++){
        digitalWrite(led[y],LOW);
    }
        digitalWrite(led[x],HIGH);
        delay(d);


}
 for(int x=6; x>0; x--){
    for(int y=0; y<8; y++){
        digitalWrite(led[y],LOW);
    }
        digitalWrite(led[x],HIGH);
        delay(d);

}
 for(int i = 0; i < 4; i++) {
    digitalWrite(led[i], HIGH);
    digitalWrite(led[7-i], HIGH);
    delay(d);
  }
  
 
  for(int i = 0; i < 4; i++) {
    digitalWrite(led[i], LOW);
    digitalWrite(led[7-i], LOW);
    delay(d);
  }
  for(int x=7; x>=0; x--){
    for(int y=0; y<8; y++){
        digitalWrite(led[y],LOW);
    }
        digitalWrite(led[x],HIGH);
        delay(d);


}
 for(int x=1; x<8; x++){
    for(int y=0; y<8; y++){
        digitalWrite(led[y],LOW);
    }
        digitalWrite(led[x],HIGH);
        delay(d);

}
 for(int i = 7; i >0; i--) {
    digitalWrite(led[i], HIGH);
    delay(d);
}

}
