#include "rechner.h"

//Funktion intro
int intro()
{
	// Ausgabe der Begrüssung/Intro
	printf("Willkommen zum im Rechner Tool!\r\n");
	printf("Heute Rechnen wir was sch%cnes!\r\n\r\n", oe);
	
	//Funktion Retur 0
	return 0;
}

//Funktion menu
int menu()
{
	//Mennu Ausgabe und Abfrage
	int selectmenu;
	printf("Menue\r\n");
	printf("1\t Primzahlen\n");
	printf("2\t Beschleunigung\n");
	printf("3\t Primfaktorenzerlegung\n");
	printf("4\t Reihen Modulo Counter\n");
	printf("5\t ModuloWert ermitteln\n");
	printf("6\t ABC-Formel f%cr Quadratische Gleichungen\n", ue);
	//Frage
	printf("Bitte w%chlen Sie ein Tool aus und tippen die Nummer ein:", ae);
	scanf_s("%d[^0-6]",&selectmenu);

	system("cls");
	//Switch div. Menus
	switch(selectmenu)
	{
	case 1:
		primzahl();		//Start Funktion: primzahl()
		break;

	case 2:
		lin_beschl();		//Start Funktion: lin_beschl()
		break;

	case 3:
		primzerlegung();	//Start Funktion: primzerlegung()
		break;

	case 4:
		reihenmodulo();	//Start Funktion: reihenmodulo()
		break;

	case 5:
		modulowert();	//Start Funktion: modulowert()
		break;

	case 6:
		abcformel();	//Start Funktion: abcformel()
		break;

	default:
		puts("Fehl eingabe try again");		//Die Eingabe war nicht unter den Gesuchten Zahlen
	}
	//Funktion Retur 0
	return 0;
}


//Funktion outtro
char outtro()
{

	printf("\r\n Zum Beenden dr%ccken Sie E \n zum Weitermachen dr%ccken Sie eine beliebige Taste\n", ue, ue);
	ende = getch(); // Wartet auf die Eingabe von einem Zeichen

	system("cls");

	//Funktion Retur die Variabel ende
	return ende;
}




