#include "rechner.h"

//Funktion reihenmodulo
int reihenmodulo()
{

	//Variabeln für diese Funktion Definieren:
	unsigned long int counter =1;		//Reihen Counter
	unsigned long int reihe;				//Welche Reihe das gerechnet wird über Abfrage vom User definiert
	unsigned long int teiler1;			//Welche Teiler das gerechnet wird über Abfrage vom User definiert
	unsigned long int teiler2;			//Welche Teiler das gerechnet wird über Abfrage vom User definiert
	unsigned long int teiler3;			//Welche Teiler das gerechnet wird über Abfrage vom User definiert
	unsigned long int rest;				//Welcher Rest das Raus kommen muss definiert durch User abfrage
	unsigned long int fehler=1;			//Fehler Counter
	unsigned long int modulo1;			//Modulo Ergebnisse
	unsigned long int modulo2;			//Modulo Ergebnisse
	unsigned long int modulo3;			//Modulo Ergebnisse
	
	
	//Begrüssung
	printf("Willkommen zum Modulo Tool\n\r");

	do{
		
		// Abfrage Teil
		printf("Welche Reihe:");
		scanf_s ("%d",&reihe);
		printf("\nDurch was soll geteilt werden? 3 Teiler eingeben mit Leerzeichen getrennt Bsp(\"3 5 8\"):\n");
		scanf_s ("%d %d %d",&teiler1, &teiler2, &teiler3);
		printf("Welcher Rest wert soll bleiben:");
		scanf_s ("%d",&rest);

		//Kontrollstrucktur über eingabe
		if(reihe<=0 || teiler1<=0 || teiler2<=0 || teiler3<=0 || rest<=0)
		{
			
			fehler=2;
			printf("\nEs wurde eine Fehleingabe get%ctigt bitte nochmals eingeben!!\n", ae);
			reihe = 0;
			teiler1 = 0;
			teiler2 = 0;
			teiler3 = 0;
			rest = 0;

		}
		else
		{
			printf("\nDie Eingaben waren korrekt!");
			fehler=1;			
		}

	//Nochmals nach Eingabe fragen wenn Fehler gleich =2
	}while (fehler==2);

	printf("\n\rReihe:\t Restbei durch \n\t%d\t%d\t%d\n", teiler1, teiler2, teiler3);

	//Endlos FOR Schlaufe
	for(;;)
	{
		//Schleife
		modulo1 = (counter*reihe) % teiler1;
		modulo2 = (counter*reihe) % teiler2;
		modulo3 = (counter*reihe) % teiler3;

		printf("%d\t%d\t%d\t%d\t\n", counter*reihe, modulo1, modulo2, modulo3);

		counter++;

		//Stoppen wenn Ziel erreicht
		if((modulo1==rest) && (modulo2==rest) && (modulo3==rest))
		{
			printf("Ziel Erreicht! ENDE");
			break;
		}

		//Notfall stopp:
		if(UINT_MAX <(1.0*counter*reihe))
		{
			printf("Int Maximum erreich! Notfall ENDE\n");
			break;
		}

	}

	// Wait bis Enter
	system("pause");
	//Bildschirm Clear
	system("cls");


	//Funktion Retur 0
	return 0;

}