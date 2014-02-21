#include "rechner.h"

//Funktion primzahl
int primzahl()
{
	//Primzahlen finder

	int grenze; //Obere Grenze für Primzahlsuche Bsp.300000
	int zaehler; //Aktuelle Zahl die überprüft wird Bsp. 2
	int izaehler; //Interne Zählvariable(Wird durch "zaehler" geteilt um ganzzahligen Rest zu eritteln)
 
	//Begrüssung und Abfragen
	printf("Willkommen im Primzahlentool!\r\n\r\n");
	printf("Bitte geben Sie einen Startwert ein:");
	scanf_s ("%d",&zaehler);
	if(zaehler <= 1)
	{
		printf("Der Z%chler kann nicht kleiner geleich 1 sein! Auf 2 gesetzt! \r\n", ae);
		zaehler =2;
	}
	printf("\r\n Bitte geben Sie eine Obere Grenze ein:");
	scanf_s ("%d",&grenze);
	if(zaehler >= grenze)
	{
		printf("Der Z%chler kann nicht gr%csser geleich der Oberengrenze sein! Auf %d gesetzt! \r\n", ae, oe, grenze);
		zaehler =2;
	}
	
	//Ausgabe
	printf("\r\n Ausgabe der Primzahlen:\r\n");
	for(zaehler;zaehler <= grenze;zaehler++) //Alle Zahlen von Anfangszähler bis zur Grenze überprüfen
    {
        for(izaehler = (zaehler-1);zaehler%izaehler;izaehler--) //Schleife die so lange läuft, bis die Modulo-Operation 0 liefert
        {}
        if(izaehler == 1) //Wenn "zaehler" nur durch 1 den Rest 0 hat, dann ist "zaehler" eine Primzahl
        {
            printf("\t \t \t %i\n",zaehler); //Ausgbe
        }
    }
	// Wait bis Enter
	system("pause");
	//Bildschirm Clear
	system("cls");
	//Funktion Retur 0
	return 0;
    
}
