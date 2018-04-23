#include "library.h" // #include library.h headeren for funktionsprototypen:

// Implementation af selve funktionen:
int multiply(int x, int y){
	// Resultatet af multipliceringen lægges i en lokal variabel
	// Der kun eksisterer i funktionen:
	int result = x * y;
	// Den sendes ud til den kaldende funktion, vha. return:
	return result;
}