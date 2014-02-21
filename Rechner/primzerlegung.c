#include "rechner.h"

//Funktion Primzerlegung
int primzerlegung()
{
	//Variabeln
	int primzahlen[MAXindex];		//Array mit Primzahlen
	int indexprimzahlen =0;		//Index des Arry Primzahlen
	int zaehler;				//Zaehler zum finden der Primzahlen
	int izaehler;				//Interner Zähler
	int grenze =MAXGrenze;			//Obere Grenze der Primzahlen suche
	int zahl;					//Zahl welche zerlegt wird
	int erstezahl;				//Wird für die Ausgabe des Mal Zeichens benötigt ;-)
	int gleichprim;				//Wird zur Feststellung benötigt falls eine Zahl direkt eine Primzahl ist
	char nochmals;				//Wird für die Abfrage zur Wiederholung gebraucht

	//Begrüssung und Abfrage
	printf("Willkommen im Primfaktorenzerlege Tool!");
	printf("\r\nDie Zerlegung funktioniert mit Zahlen bis 10'000");


	//Primzahlen vorbereiten
	for(zaehler =2;zaehler <= grenze;zaehler++) //Alle Zahlen von Anfangszähler bis zur Grenze überprüfen
	{
		for(izaehler = (zaehler-1);zaehler%izaehler;izaehler--) //Schleife die so lange läuft, bis die Modulo-Operation 0 liefert
		{}
		if(izaehler == 1) //Wenn "zaehler" nur durch 1 den Rest 0 hat, dann ist "zaehler" eine Primzahl
		{
			// Deaktiviert da im hintergrund 
			//printf("%d\t \t \t %i\n", indexprimzahlen ,zaehler); 
			primzahlen[indexprimzahlen] = zaehler;
			indexprimzahlen++;
		}
		if(indexprimzahlen == MAXindex)
		{

			break;
		}

	}

	//Start durchlauf:
	do{

		printf("\r\nBitte geben Sie eine zu Zerlegende Zahl ein:");
		scanf_s ("%d",&zahl);

		printf("\r\n%d:\t",zahl);

		//Vorbereitung für Durchlauf
		indexprimzahlen =0;
		erstezahl = 1;

		//Check input
		if(zahl <=0)
		{
			printf("Ist kleiner als Null!");
			continue;
		}

		for(;;)
		{
			//Primzahlen zerlegung
			if(zahl % primzahlen[indexprimzahlen]==0)
			{
				//Treffer
				
				//Malzeichen zwischen den Zahlen
				if(erstezahl>=2)
				{
					printf("*");
				}
				//Bei jedem Treffer Durchgang erhöhen
				erstezahl++;
				
				if(zahl == primzahlen[indexprimzahlen])
				{
					//Ende der Zerlegung
					printf(" %d ",primzahlen[indexprimzahlen]);
					if(erstezahl==2)
					{
						printf(" ist auch gleich die Primzahl!");
					}
					
					break;
				}

				

				printf(" %d ",primzahlen[indexprimzahlen]);

				zahl = zahl / primzahlen[indexprimzahlen];



				continue;

			}
			else
			{
				//KeinTreffer
				indexprimzahlen++;
			}

		}

		printf("\r\nn%cchste Zahl J/N?", ae);
		nochmals = getch(); // Wartet auf die Eingabe von einem Zeichen


	}while((nochmals != 'N') && (nochmals != 'n'));

	//Funktion Retur 0
	return 0;

}