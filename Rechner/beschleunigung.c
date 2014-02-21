#include "rechner.h"

//Funktion lin_beschl
int lin_beschl()
{
	//Berechunung der Linearen Beschleunigung
	int auswahl;
	//Beschleunigung in Meter / Sekunde im Quadrat
	float beschleunigung; 
	//Zeit in Sekunden
	float ziit;		
	//Distanz in Meter
	float distanz;	
	//Endgeschwindigkeit
	float endgeschwindigkeit;
		
	
	printf("Willkommen zum Linearen Beschleunigungstool!\r\n");

	printf("Was ist gesucht?\r\n");
	printf("1\t Endgeschwindigkeit nach Zeit\r\n");
	printf("2\t Endgeschwindigkeit nach Distanz\r\n");
	scanf_s("%d",&auswahl);




	switch(auswahl)
	{
   case 1:
	   //Endgeschwindigkeit nach Zeit
	   printf("Bitte Beschleunigung eingeben[m/s^2]: \r\n");
	   scanf_s ("%f",&beschleunigung); //10
	   printf("Bitte Zeit eingeben[s]: \r\n");
	   scanf_s ("%f",&ziit); //60

	   endgeschwindigkeit = ziit*beschleunigung;

	   printf("Es wird eine Endgeschwindigkeit von: %f [m/s] erreicht.\r\n", endgeschwindigkeit);

	          
   break;

   case 2:
	   //Endgeschwindigkeit nach Distanz 
	   printf("Bitte Beschleunigung eingeben[m/s^2]: \r\n");
	   scanf_s ("%f",&beschleunigung); //10
	   printf("Bitte Distanz eingeben[m]: \r\n");
	   scanf_s ("%f",&distanz); //60

	   endgeschwindigkeit = sqrt(2*distanz*beschleunigung);

	   printf("Es wird eine Endgeschwindigkeit von: %f [m/s] erreicht.\r\n", endgeschwindigkeit);


   break;

   default:
	   //wenn was anderes eingegeben wird
	   printf("Falsche Eingabe\r\n");

       
	} 
	
	// Wait bis Enter
	system("pause");
	//Bildschirm Clear
	system("cls");

	//Funktion Retur 0
	return 0;

}