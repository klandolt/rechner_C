#include "rechner.h"

//ABCFormel Funktion
int abcformel()
{

	//Variabeln für diese Funktion Definieren:
	float var_a;				//Die Variable A
	float var_b;				//Die Variable B
	float var_c;				//Die Variable C
	double var_1;				//Das 1. Ergebniss
	double var_2;				//Das 2. Ergebniss
	float var_D;				//Die Diskriminante
	double var_wurzelD;		//Die Wurzel aus der Diskriminante
	int fehler =1;					//Fehler Counter

	
	
	
	//Begrüssung
	printf("Willkommen zum ABC Formel Tool\n\r");
	printf("Mit diesem Tool kann man Quadratische Gleichungen anhand der ABF Formel l%csen\n\r", oe);
	printf("Die Quadratische Gleichung muss in die Grundform gebracht werden:\n\r");
	printf("Bsp:\t 2x^2 + 3x -2= 0\t So w%cre A =2 B =3 und C=-2\n\r", ae);
	printf("\t Ax^2 +oder- Bx +oder- C = 0\n\r");



	do{
		
		// Abfrage Teil
		printf("\nGeben Sie den Koeffizienten A ein:");
		scanf_s ("%g",&var_a);
		printf("\nGeben Sie den Koeffizienten B ein:");
		scanf_s ("%g",&var_b);
		printf("\nGeben Sie den Koeffizienten C ein:");
		scanf_s ("%g",&var_c);
				
		//Kontrollstrucktur über eingabe
		if(var_a==0)
		{

			fehler=2;
			printf("\nEs wurde eine Fehleingabe get%ctigt bitte nochmals eingeben!!\n", ae);
			var_a = 0;
			var_b = 0;
			var_c = 0;

		}
		else
		{
			printf("\nDie Eingaben waren korrekt!\n");
			fehler=1;			
		}

	//Nochmals nach Eingabe fragen wenn Fehler gleich =2
	}while (fehler==2);

	//Diskriminante ermitteln:
	var_D =((var_b*var_b)-(4*var_a*var_c));

	printf("Die Diskriminante lautet: %f\n", var_D);

	if (var_D>0)
	{
		//Es gibt 2 Lösungen
		printf("Es gibt 2 M%cgliche L%csungen\n", oe, oe);
		//Wurzel Aus der Diskriminante
		var_wurzelD = sqrt (var_D);
		//Lösungen Rechnen
		var_1 = ((-var_b+var_wurzelD)/(2*var_a));
		var_2 = ((-var_b-var_wurzelD)/(2*var_a));
		//Lösungen zurückgeben
		printf("\nDie m%cglichen Ergebnisse lauten: %f und %f\n\r", oe, var_1, var_2);
		printf("\nDas Ergebniss mit der Probe pr%cfen\n\r", ue);

	}else if (var_D ==0)
	{
		//Es gibt eine Lösung:
		printf("Es gibt eine M%cgliche L%csung\n", oe, oe);
		//Lösungen Rechnen
		var_1 = ((-var_b)/(2*var_a));
		
		//Lösungen zurückgeben
		printf("\nDas m%cgliche Ergebniss lautet: %f\n\r", oe, var_1);
		printf("\nDas Ergebniss mit der Probe pr%cfen\n\r", ue);

	}else
	{
		//Die Diskriminante ist unter 0 Keine Lösung

		printf("Es gibt keine M%cgliche L%csung\n", oe, oe);
	}

	
	// Wait bis Enter
	system("pause");
	//Bildschirm Clear
	system("cls");



	//Funktion Retur 0
	return 0;

}