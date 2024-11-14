//Programm für den Slave, Kommunikation über Bluetooth HC-05 Modul
//Konfiguration:
//Stelle das Modul als Slave ein:
//  AT+ROLE=0
//    OK
//Überprüfe die Adresse des Moduls:
//  AT+ADDR?

//Der Slave empfängt die gemessene externe Temperatur und gibt somit den korrekten Widerstand am Digitalem Potentiometer aus.
//Der Parallel geschaltene interne Temperatursensor wird mit einem Schalter umgeschalten auf "extern".
//Die Temperatur wird somit über den Digitalen Potentiometer "vorgetäuscht".
//Um die internen Sicherheitsfunktionen beizubehalten und das Gerät weiterhin Betriebsicher betreiben zu können wurde das Problem mit externer Temperatur / Umschalter gelöst. 

//Bibliotheken einfügen

//Werte definieren


//Intialisierung
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
