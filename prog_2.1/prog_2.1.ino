/*************************************************************************
**                                                                      **
**              Descripció programa                                     **
**                                                                      **
*************************************************************************/

//******  Includes   *****************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************


int ledVermell1 = 7;
int ledTaronja2 = 8;
int ledVerd3 = 9;
int ledVermell4 = 10;
int ledTaronja5 = 11;
int ledVerd6 = 12;


//El void setup només s'executa un cop durant tot el programa. 
void setup()
{
  // Configració del pins de sortida

  pinMode(ledVermell1, OUTPUT);
  pinMode(ledTaronja2, OUTPUT);
  pinMode(ledVerd3, OUTPUT);
  pinMode(ledVermell4, OUTPUT);
  pinMode(ledTaronja5, OUTPUT);
  pinMode(ledVerd6, OUTPUT);

  Serial.begin(9600);

}

// La funció Loop es va repetin cada cop.
void loop()

  // seqüència semàfor  A

 {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell4, HIGH);
    delay(3000);
    
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVerd6, HIGH);
    delay(6000);

  
    digitalWrite(ledVerd6, LOW);
    digitalWrite(ledTaronja5, HIGH);
    digitalWrite(ledVermell1, HIGH);
    delay(3000);

    digitalWrite(ledTaronja5, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell1,HIGH);
    delay(3000);

    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVerd3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    delay(6000); 

    digitalWrite(ledVerd3, LOW);
    digitalWrite(ledTaronja2, HIGH);
    digitalWrite(ledVermell4, HIGH);
    delay(3000);

    digitalWrite(ledTaronja2, LOW);
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell4, HIGH);
    delay(3000);
    
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell4, LOW);
    






   
     
}    
