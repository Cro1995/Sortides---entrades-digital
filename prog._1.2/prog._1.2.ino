/*************************************************************************
**                                                                      **
**              Descripció programa                                     **
**                                                                      **
*************************************************************************/

//******  Includes   *****************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************


int ledVermell1 = 5;
int ledVermell2 = 6;
int ledVermell3 = 7;
int ledVermell4 = 8;
int ledVermell5 = 9;
int ledVermell6 = 10;
int ledVermell7 = 11;
int ledVermell8 = 12;
int polsador = 2;
int numero = 0;

//El void setup només s'executa un cop durant tot el programa. 
void setup()
{
  
     // configuració dels pins de sortida 
  pinMode(ledVermell1, OUTPUT);    
  pinMode(ledVermell2, OUTPUT);
  pinMode(ledVermell3, OUTPUT);
  pinMode(ledVermell4, OUTPUT);
  pinMode(ledVermell5, OUTPUT);
  pinMode(ledVermell6, OUTPUT);
  pinMode(ledVermell7, OUTPUT);
  pinMode(ledVermell8, OUTPUT); 

  pinMode(polsador, INPUT);
  Serial.begin(9600);
}
 



// void loop es va executan continuament.
void loop()
{

  if (digitalRead(polsador) == LOW) {
    numero++;
    Serial.println(numero);
    delay(1000);
    if (numero == 16){
      numero = 0;}
    
  }
  // numero 0 en binari 
  else if (numero == 0) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);
  }

  // numero 1 en binari 
  else if (numero == 1) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);
  }

  // numero 2 en binari 
  else if (numero == 2) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 3 en binari 
  else if (numero == 3) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 4 en binari 
  else if (numero == 4) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 5 en binari 
  else if (numero == 5) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 6 en binari 
  else if (numero == 6) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 7 en binari 
  else if (numero == 7) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 8 en binari 
  else if (numero == 8) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 9 en binari 
  else if (numero == 9) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 10 en binari 
  else if (numero == 10) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  //numero 11 en binari 
  else if (numero == 11) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 12 en binari 
  else if (numero == 12) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 13 en binari 
  else if (numero == 13) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 14 en binari
  else if (numero == 14) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // numero 15 en binari
  else if (numero == 15) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }
}

