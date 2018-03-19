#include <stdio.h> //Inkluderer et bibliotek med funktioner som bruges i programmet. <stdio.h> inkluderes altid


/*alle programmer skal have en main funktion. Her forventes returværdien af dataypen int
 * hvilket vi kommer nærmere ind på senere*/
 
int main(int argc, char **argv) //teksten i parantesen kan i dette tilfælde undværes, igen kommer vi ind på dette senere
{
	printf("hello world\n"); //printf printer den streng af tekst der står inden for anførselstegnende ud på konsollen
	return 0; //programmet har en slutværdi på 0, i dette tilfælde betyder det succes og afslutter programmet
}