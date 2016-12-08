# include "datos.h"

int a;
int b;

int suma;
char casos;
int num;
int multi;
int r;
int promedio;



void setup() {

Serial.begin(9600);
}

void loop() {
 
if(Serial.available()>0)
{

casos=Serial.read();

switch(casos){
  case 'A':

 Serial.println("INICIO OPERACION SUMA:"); 
 for (int a = 0; a < 20; a++) {
    for (int b = 0; b < 3; b++) {
      suma +=matriz[a][b];
      
       }
      Serial.print(suma);
    Serial.println("");
    delay(200);
    suma = 0;
  }

  break;
  
  case 'B':
 
  Serial.println("INICIO OPERACION MULTIPLICACION:");

for (int b = 0; b < 3; b++) {
    for (int a = 0; a < 5; a++) {
      multi= multi * matriz[b][a];
    }
    
    Serial.print(multi);
    Serial.println("");
    delay(750);
    multi = 1;
    a=0;

  }
  break;


  
  case 'C':

    Serial.println("INICIO OPERACION PROMEDIO:");
    for (int a = 0; a < 20; a++) {
    for (int b = 0; b < 3; b++) {
      suma += matriz[a][b];
      
        suma=suma+num;
            }
         r=r+suma;
         suma=0;
         b=0;
         
  }
   promedio=r/3;
   Serial.print("PROMEDIO =");
   Serial.print(promedio);

break;
  

}
}
}
