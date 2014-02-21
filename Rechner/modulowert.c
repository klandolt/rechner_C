#include "rechner.h"


//Funktion Modulowert
int modulowert()
{

	//Variabeln für diese Funktion Definieren:
	unsigned long int zahl;				//Die Zahl von welcher der Modulo Wert errechnet wird
	unsigned long int teiler1;			//Welche Teiler das gerechnet wird über Abfrage vom User definiert
	unsigned long int rest;				//Welcher Rest das Raus kommen muss definiert durch User abfrage
	unsigned long int fehler=1;			//Fehler Counter
	unsigned long int modulo1;			//Modulo Ergebnisse
	
	
	
	//Begrüssung
	printf("Willkommen zum Modulo Wert Tool f%cr eine Zahl\n\r", ue);

	do{
		
		// Abfrage Teil
		printf("\nGeben Sie die Zahl ein:");
		scanf_s ("%d",&zahl);
		printf("\nGeben Sie den Teiler ein:");
		scanf_s ("%d",&teiler1);
		
		//Kontrollstrucktur über eingabe
		if(zahl<=0 || teiler1<=0)
		{

			fehler=2;
			printf("\nEs wurde eine Fehleingabe get%ctigt bitte nochmals eingeben!!\n", ae);
			zahl = 0;
			teiler1 = 0;
			rest = 0;

		}
		else
		{
			printf("\nDie Eingaben waren korrekt!");
			fehler=1;			
		}

	//Nochmals nach Eingabe fragen wenn Fehler gleich =2
	}while (fehler==2);

	modulo1 = zahl%teiler1;

	printf("\nDas Ergebniss lautet: %d Modulo %d = %d\n\r", zahl, teiler1, modulo1);

	
	// Wait bis Enter
	system("pause");
	//Bildschirm Clear
	system("cls");


	//Funktion Retur 0
	return 0;

}