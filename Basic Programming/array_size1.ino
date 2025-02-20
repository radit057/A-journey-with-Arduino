
void setup() {
 Serial.begin(9600);
  int array[]={10,30,50};
  char carray[]={'a','c','s','d'};
  float farray[]={3.14,9.8,10};
  int a=1;float b=3.14; char c='a';
 
  Serial.println(sizeof(farray)/sizeof(farray[0]));
}
  

void loop() {

}