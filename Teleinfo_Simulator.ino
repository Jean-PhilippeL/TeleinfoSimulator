#include <SoftwareSerial.h>

SoftwareSerial cptSerial(2, 3);

unsigned long compteurHC = 2137616;
unsigned long compteurHP = 3119218;

void setup() {
        Serial.begin(1200);     // opens serial port, sets data rate to 1200 bps
        cptSerial.begin(1200);
        
        delay(2000);
        cptSerial.println("BON ANNIVERSAIRE ALEX ;-)");
         
         delay(2000);
         cptSerial.println("\n\n\nDebut de la Simulation de teleinfo dans 2 secondes ! \n\n\n");
         delay(2000);
}

void loop() {

  
cptSerial.println("IINST 001 X");
cptSerial.println("IMAX 033 E");
cptSerial.println("PAPP 00290 ,");
cptSerial.println("HHPHC D /");
cptSerial.println("MOTDETAT 000000 B" );
cptSerial.println("ADCO 031028690712 :");
cptSerial.println("OPTARIF HC.. <");
cptSerial.println("ISOUSC 45 ?");
//cptSerial.println("HCHC 007197616 +");

cptSerial.print("HCHC 00");
cptSerial.print(compteurHC);
cptSerial.print(" +\n");
compteurHC+=random(2);

//cptSerial.println("HCHP 006119216 -");
cptSerial.print("HCHP 00");
cptSerial.print(compteurHP);
cptSerial.print(" -\n");
compteurHP+=random(7);

cptSerial.println("PTEC HP.. ");

 
delay(1000);
}
