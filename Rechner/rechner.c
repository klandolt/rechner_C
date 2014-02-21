#include "rechner.h"


//Main Funktion hier beginnt alles
int main(int argc, char* argv[])
{
	//DO While Schlaufe für ganzes Programm:
	do
	{
	//Aufruf Intro
	intro();
	//Aufruf Menu
	menu();

	//Aufruf outro bzw. Rückgabe der Funktion Outtro
	ende = outtro();

	} while((ende != 'E') && (ende != 'e'));		// Ende wenn die Taste E oder e gedrückt wird
	
	//Ende des Tools
	exit (0);
}

