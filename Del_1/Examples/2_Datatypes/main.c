#include <stdio.h>

int main(int argc, char **argv)
{
  //her initialiseres nogle variabler med forskellige datatyper
  int a = 10; //integer typen tager kun heltal med
  float b = 2.5; //float kan indeholde kommatal
  
  //for at printe data fra en variabel skal man bruge en format
  //specifier. For int er denne %d og for float er den %f
	printf("an integer is a whole number. integer 'a' is: %d\n\n",a); //dataen der skal representeres vælges udenfor anførselstegnende efter et komma
  printf("floats can store decimals as well. float 'b' is : %f\n\n",b);
  printf("we don't always want that many decimals though! you can adjust that like this %.2f\n\n",b); //Du kan bestemme antal decimaler ved at indsætte fx .2 mellem % og f.
  
  char ch = 'A'; //Character dataypen tager et enkelt tegn som data, men er også en heltalsværdi som oversættes i henhold til ASCII tabellen
  //format specifier for char typen er %c, men bruges andre kan man fx finde talværdien som følgende:
  printf("a character has several values, the character value is %c, and the integer value is %d\n\n",ch,ch);
  
	return 0;
}
