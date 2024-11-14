//Programm für den Master, Kommunikation über Bluetooth HC-05 Modul
//Stelle das Modul als Master ein:
//  AT+ROLE=1
//    OK
//Stelle sicher, dass das Modul andere Geräte sehen kann:
//  AT+CMODE=0
//    OK
//Scanne nach verfügbaren Geräten:
//  AT+INQ
//    Du erhältst eine Liste mit Adressen wie +INQ:XXXX,XX,XXXX.
//Wähle die Adresse des Slave-Moduls aus und binde sie:
//  AT+BIND=XXXX,XX,XXXX
//    OK
// Stelle die Verbindung her:
//  AT+LINK=XXXX,XX,XXXX
//    OK
//Der Master sendet die gemessene externe Temperatur damit der Slave den korrekten Widerstand am Digitalem Potentiometer ausgeben kann.


//Bibliotheken einfügen
#include <SoftwareSerial.h>
//Werte definieren


//Intialisierung
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
