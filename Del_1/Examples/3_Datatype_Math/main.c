#include <stdio.h>

int main(int argc, char **argv)
{
  int a = 10;
  int b = 3;
  
  printf("A quick way to do maths: %d * %d is %d\n\n", a,b,a*b); //matematikken kan skrives direkte i printf efter et komma
  
  int c = a * b; //man kan også lave beregninger ved at skrive matematikken i en ny variabel

  printf("displaying the math in varible c: %d * %d is %d\n\n",a,b,c);

  //man kan dog støde i problemer hvis man bruger forkerte datatyper!
  //hvad sker der hvis man deler a med b og forsøger at vise det som en int (%d)?
  
  c = a / b; //ændres værdier undlades dataypen, da den kun skal deklareres første gang
  
  printf("wrong datatypes can cause some problems: %d / %d as en integer result: %d\n\n",a,b,c);
  
  float d = 10;
  float e = 3;
  float f = d / e;
  
  printf("Now with a float format specifier: %.1f / %.1f as a float result: %.2f\n\n",d,e,f);
  
	return 0;
}