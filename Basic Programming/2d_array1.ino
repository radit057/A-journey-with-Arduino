
void setup() {
 Serial.begin(9600);
    char array[3][4]={{'a','b','c','d'}, 
                      {'1','2','3','4'},
                      {'q','w','e','r'}};
  
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      Serial.print(array[i][j]);
       Serial.print("");
                  }
  Serial.println("");
}
  }
void loop() {

}