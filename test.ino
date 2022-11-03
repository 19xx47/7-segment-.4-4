int d1 =2;
int d2 =3;
int d3 =4;
int d4 =5;
int a = 6;
int b = 7;
int c = 8;
int d = 9;
int e = 10;
int f = 11;
int g = 12;
int point = 13;
int button = A0;
int k = 1, n = 0 , i = 0;
boolean lastbutton=LOW;
boolean currentbutton=LOW;
boolean ledon=false;
long count1 = 0; 
int x = 100;
int reset;
int count2=0; 
void setup()
{
pinMode(button, INPUT_PULLUP); 
 pinMode(d1, OUTPUT);
 pinMode(d2, OUTPUT);
 pinMode(d3, OUTPUT);
 pinMode(d4, OUTPUT);
 pinMode(a, OUTPUT);
 pinMode(b, OUTPUT);
 pinMode(c, OUTPUT);
 pinMode(d, OUTPUT);
 pinMode(e, OUTPUT);
 pinMode(f, OUTPUT);
 pinMode(g, OUTPUT);
 pinMode(point, OUTPUT);
 digitalWrite(d1, HIGH);
 digitalWrite(d2, HIGH);
 digitalWrite(d3, HIGH);
 digitalWrite(d4, HIGH);
 }
boolean debounce(boolean last){
  boolean current=digitalRead(button);
  if(last !=current){
   delay(5);
   current=digitalRead(button);
}
  return current;
}
void loop()
{
  
      for( int j = 0 ; j <= 9 ; j++){
        pickDigit(2);
        pickNumber(j);
        for( i = 0 ; i <= 9 ; i++){
          clearleds();
          pickDigit(1);
          pickNumber(i);
          delayMicroseconds(65);
        }
        if( j == 9 ){
          pickDigit(3);
          pickNumber(k);
          k++;
        }
        if( k == 9 ){
          pickDigit(4);
          n++;
          pickNumber(n);
        }
        if( n == 1 && k == 2 && j == 3 && i == 4){
           pickDigit(1);
           pickDigit(2);
           pickDigit(3);
           pickDigit(4);
           pickNumber(0);
           n = 0 , k = 0 , j = 0;
        }
      }
}
void pickDigit(int pick1)
{
 digitalWrite(d1, LOW);
 digitalWrite(d2, LOW);
 digitalWrite(d3, LOW);
 digitalWrite(d4, LOW);
 switch(pick1)
 {
 case 1: 
   digitalWrite(d1, HIGH); 
   break;
 case 2: 
   digitalWrite(d2, HIGH); 
   break;
 case 3: 
   digitalWrite(d3, HIGH);
   digitalWrite(point,LOW);
   break;
 default: 
   digitalWrite(d4,HIGH); 
   break;
 }
}
void pickNumber(int pick2) 
{
 switch(pick2)
 {
 case 0: 
   zero(); 
   break;
 case 1: 
   one(); 
   break;
 case 2: 
   two(); 
   break;
 case 3: 
   three(); 
   break;
 case 4: 
   four(); 
   break;
 case 5: 
   five(); 
   break;
 case 6: 
   six(); 
   break;
 case 7: 
   seven(); 
   break;
 case 8: 
   eight(); 
   break;
 case 9: 
   nine(); 
   break;
 }
}
void clearleds() 
{
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);
 digitalWrite(point, HIGH);
}
void zero()
{
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, HIGH);
}
void one(){
 digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
}
void two(){
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
}
void three(){
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
}
void four(){
 digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
}
void five(){
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
}
void six(){
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
}
void seven(){
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
}
void eight(){
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
}
void nine(){
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
}
