#include <stdio.h>

int main(void)
{
	//nu bliver det spændende! Loops er en essentiel del af programmering.
  //vi starter med at se på while-loopet
  
  int i = 0;  //denne variabel bruger vi som betingelse til while-loopet.
  
  //et while loop kører så længe betingelsen i paranteserne er opfyldt!
  //her fortæller vi at det skal køre så længe variablen i er mindre end eller lig med 10.
  //pas på "one-off" fejl, hvad sker der hvis man glemmer = tegnet her?
  while(i <= 10) 
  {
    printf("i = %d\n",i);
    i++; //der lægges en til variablen i hver gang loopet når her til.
  }
  
  printf("\n"); //mellemrum for at gøre outputtet mere læsbart.
  
  //for-loopet fungerer lidt anderledes. Her tæller direkte i loopet.  
  //der er 3 dele i parantesen her. Vi deklarer først en variabel vi kan tælle med og sætter den til 0
  //herefter en betingelse, så længe j er mindre end eller lig med 10 vil loopet fortsætte
  //og sidst en inkrementering af i med i++. Dette sker hver gang loopet kører.
  for(int j = 0; j <= 10; j++)
  {
    printf("j = %d\n",j); //printer j variablen så længe betingelsen er opfyldt.
  }
  printf("\n");
	return 0;
}
