// Unidades
const int SALIDA1 = 6;
const int SALIDA2 = 5;
const int SALIDA3 = 4;
const int SALIDA4 = 3;
const int SALIDA5 = 2;
const int SALIDA6 = 1;
const int SALIDA7 = 0;
// Decena

const int SALIDA8 = 7;
const int SALIDA9 = 8;
const int SALIDA10 = 9;
const int SALIDA11 = 10;
const int SALIDA12 = 11;
const int SALIDA13 = 12;
const int SALIDA14 = 13;

// Variables 

int unidad = 9;
int decena = 9;

void numeroImprimir(int unidad, int decena) {
  switch (unidad)
   {
   case 0:
      //Cero
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, HIGH);
      delay(1000);
      break;
   case 1:
      digitalWrite(SALIDA1, HIGH);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, HIGH);
      delay(1000);
      break;
   case 2:
      //DOS
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, HIGH);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 3:
      //TRES
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 4:
      //CUATRO
      digitalWrite(SALIDA1, HIGH);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 5:
      //CINCO
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, HIGH);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 6:
      //SEIS
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, HIGH);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 7:
      //SIETE
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, HIGH);
      delay(1000);
      break;
   case 8:
      //OCHO
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 9:
      //NUEVE
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   default:
      digitalWrite(SALIDA1, HIGH);
      digitalWrite(SALIDA2, HIGH);
      digitalWrite(SALIDA3, HIGH);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, HIGH);
      break;
   }
    // Decena
   switch (decena)
   {
   case 0:
      //Cero
      digitalWrite(SALIDA8, LOW);
      digitalWrite(SALIDA9, LOW);
      digitalWrite(SALIDA10, LOW);
      digitalWrite(SALIDA11, LOW);
      digitalWrite(SALIDA12, LOW);
      digitalWrite(SALIDA13, LOW);
      digitalWrite(SALIDA14, HIGH);
      delay(1000);
      break;
   case 1:
      digitalWrite(SALIDA8, HIGH);
      digitalWrite(SALIDA9, LOW);
      digitalWrite(SALIDA10, LOW);
      digitalWrite(SALIDA11, HIGH);
      digitalWrite(SALIDA12, HIGH);
      digitalWrite(SALIDA13, HIGH);
      digitalWrite(SALIDA14, HIGH);
      delay(1000);
      break;
   case 2:
      //DOS
      digitalWrite(SALIDA8, LOW);
      digitalWrite(SALIDA9, LOW);
      digitalWrite(SALIDA10, HIGH);
      digitalWrite(SALIDA11, LOW);
      digitalWrite(SALIDA12, LOW);
      digitalWrite(SALIDA13, HIGH);
      digitalWrite(SALIDA14, LOW);
      delay(1000);
      break;
   case 3:
      //TRES
      digitalWrite(SALIDA8, LOW);
      digitalWrite(SALIDA9, LOW);
      digitalWrite(SALIDA10, LOW);
      digitalWrite(SALIDA11, LOW);
      digitalWrite(SALIDA13, HIGH);
      digitalWrite(SALIDA12, HIGH);
      digitalWrite(SALIDA14, LOW);
      delay(1000);
      break;
   case 4:
      //CUATRO
      digitalWrite(SALIDA8, HIGH);
      digitalWrite(SALIDA9, LOW);
      digitalWrite(SALIDA10, LOW);
      digitalWrite(SALIDA11, HIGH);
      digitalWrite(SALIDA12, HIGH);
      digitalWrite(SALIDA13, LOW);
      digitalWrite(SALIDA14, LOW);
      delay(1000);
      break;
   case 5:
      //CINCO
      digitalWrite(SALIDA8, LOW);
      digitalWrite(SALIDA9, HIGH);
      digitalWrite(SALIDA10, LOW);
      digitalWrite(SALIDA11, LOW);
      digitalWrite(SALIDA12, HIGH);
      digitalWrite(SALIDA13, LOW);
      digitalWrite(SALIDA14, LOW);
      delay(1000);
      break;
   case 6:
      //SEIS
      digitalWrite(SALIDA8, LOW);
      digitalWrite(SALIDA9, HIGH);
      digitalWrite(SALIDA10, LOW);
      digitalWrite(SALIDA11, LOW);
      digitalWrite(SALIDA12, LOW);
      digitalWrite(SALIDA13, LOW);
      digitalWrite(SALIDA14, LOW);
      delay(1000);
      break;
   case 7:
      //SIETE
      digitalWrite(SALIDA8, LOW);
      digitalWrite(SALIDA9, LOW);
      digitalWrite(SALIDA10, LOW);
      digitalWrite(SALIDA11, HIGH);
      digitalWrite(SALIDA12, HIGH);
      digitalWrite(SALIDA13, HIGH);
      digitalWrite(SALIDA14, HIGH);
      delay(1000);
      break;
   case 8:
      //OCHO
      digitalWrite(SALIDA8, LOW);
      digitalWrite(SALIDA9, LOW);
      digitalWrite(SALIDA10, LOW);
      digitalWrite(SALIDA11, LOW);
      digitalWrite(SALIDA12, LOW);
      digitalWrite(SALIDA13, LOW);
      digitalWrite(SALIDA14, LOW);
      delay(1000);
      break;
   case 9:
      //NUEVE
      digitalWrite(SALIDA8, LOW);
      digitalWrite(SALIDA9, LOW);
      digitalWrite(SALIDA10, LOW);
      digitalWrite(SALIDA11, HIGH);
      digitalWrite(SALIDA12, HIGH);
      digitalWrite(SALIDA13, LOW);
      digitalWrite(SALIDA14, LOW);
      delay(1000);
      break;
   default:
      digitalWrite(SALIDA8, HIGH);
      digitalWrite(SALIDA9, HIGH);
      digitalWrite(SALIDA10, HIGH);
      digitalWrite(SALIDA11, HIGH);
      digitalWrite(SALIDA12, HIGH);
      digitalWrite(SALIDA13, HIGH);
      digitalWrite(SALIDA14, HIGH);
      break;
   }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(SALIDA1, OUTPUT);
  pinMode(SALIDA2, OUTPUT);
  pinMode(SALIDA3, OUTPUT);
  pinMode(SALIDA4, OUTPUT);
  pinMode(SALIDA5, OUTPUT);
  pinMode(SALIDA6, OUTPUT);
  pinMode(SALIDA7, OUTPUT);
  // Decenas
  pinMode(SALIDA8, OUTPUT);
  pinMode(SALIDA9, OUTPUT);
  pinMode(SALIDA10, OUTPUT);
  pinMode(SALIDA11, OUTPUT);
  pinMode(SALIDA12, OUTPUT);
  pinMode(SALIDA13, OUTPUT);
  pinMode(SALIDA14, OUTPUT);
}

void loop() {
  numeroImprimir(unidad, decena);
  unidad -= 1;
  if(unidad == -1){
    unidad = 9;
    decena -= 1;
    if(decena == -1){
      decena = 9;
    }
  }
}
