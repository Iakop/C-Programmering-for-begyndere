#include <stdio.h>

// nu skal vi prøve at sammensætte et lidt større program
int main(void)
{
    while(1)
	{ // vi looper, så programmet kører indtil brugeren afslutter
	    // først giver vi brugeren nogle valg!
	    printf("What would you like to do?\n\n"
	           "a: add\nb: multiply\nc: divide\nq: quit\n\n");
	    // så skal vi have brugeren til at vælge med scanf funktionen.

	    char choice; // her deklareres en variabel som brugeren giver en
	                 // værdi
	    scanf("%ch", &choice);

	    int convert; // switch case bruger int til at vælge case, så vi skal
	                 // konvertere vores char!

	    if(choice == 'A' || choice == 'a')
		{
		    convert = 1;
		}
	    if(choice == 'B' || choice == 'b')
		{
		    convert = 2;
		}
	    if(choice == 'C' || choice == 'c')
		{
		    convert = 3;
		}
	    if(choice == 'Q' || choice == 'q')
		{
		    return 0; // quit funktionen skal afslutte med det samme,
		              // derfor returnerer den 0 til main funktionen.
		}

	    float a;
	    float b;
	    printf("now choose your two numbers\n");
	    scanf("%f %f", &a, &b);

	    // switch anvender værdien i parantesen til at vælge en case.
	    switch(convert)
		{
		case 1: // her skal bruges kolon
		    printf("\n%.2f added to %.2f = %.2f\n", a, b, a + b);
		    break; // alle cases skal afsluttes med break;

		case 2:
		    printf("\n%.2f multiplied by %.2f = %.2f\n", a, b, a * b);
		    break;

		case 3:
		    printf("\n%.2f divided by %.2f = %.2f\n\n", a, b, a / b);
		    break;

		default:
		    printf("that is not a valid option!");
		    break;
		}
	}
}