#include <stdio.h>

// Lad os lave vores egne datatyper:
// Et smart eksempel kunne være at gøre en fysisk udregning overskuelig:
typedef float length;
typedef float width;
typedef float height;
typedef float volume;

// Så kan vi fortsætte med en enum:
enum color { red, orange, yellow, green, blue, purple };

int main(void)
{
	// Vi skal deklarere og initialisere helt som vi plejer:
	length l = 23;
	width w = 32.5;
	height h = 55;
	volume v = l * w * h;
	
	// Lad os tjekke om den opfører sig normalt
	printf("Volumen er: %.2fm³\n", v);
	
	// Vi sætter en variable af enum typen color op:
	enum color colorChoice;
	
	// Og så prompter vi brugeren for et tal.
	// enums er jo bare integers!
	// Vi skulle gennem nogen hoops for at tage farve ind som input,
	// men det KAN lade sig gøre.
	printf("\nPlease pick a number between 0 and 5: ");
	scanf("%d", &colorChoice);
	
	switch(colorChoice){
		case red:
			printf("So your favorite color is red?");
			break;
		case orange:
			printf("So your favorite color is orange?");
			break;
		case yellow:
			printf("So your favorite color is yellow?");
			break;
		case green:
			printf("So your favorite color is green?");
			break;
		case blue:
			printf("So your favorite color is blue?");
			break;
		case purple:
			printf("So your favorite color is purple?");
			break;
		default:
			printf("That wasn't between 0 and 5.");
			break;
	}
	printf("\n");
	
	return 0;
}
