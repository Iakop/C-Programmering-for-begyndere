#include <stdio.h>
#include "library.h"

// Prototype af funktionen, så vi kan videre beskrive den længere nede:
int add(int x, int y);

int main(void)
{
	// To heltal der skal smides i vores funktioner:
	int a = 2;
	int b = 3;
	
	// Vi tjekker for resultaterne:
	printf("%d + %d = %d\n", a, b, add(a,b));
	printf("%d * %d = %d\n", a, b, multiply(a,b));
	
	return 0;
}

int add(int x, int y){
	// Resultatet af adderingen lægges i en lokal variabel
	// Der kun eksisterer i funktionen:
	int result = x + y;
	// Den sendes ud til den kaldende funktion, vha. return:
	return result;
}