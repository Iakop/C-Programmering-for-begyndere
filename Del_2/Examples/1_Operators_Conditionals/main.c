#include <stdio.h>

int main(void)
{
  //Operatorer kan bruges til at undersøge forskellige forhold
  //her ser vi på om to tal er ens vha == operator.
  //da vi bruger = tegnet til at definere benyttes to til sammenligning!
  
  //der tilføjes et if/else statement, som fungerer som enten/eller.
  //er udsagnet sandt sendes if beskeden, er det falskt sendes else beskeden
  
  int a = 5;
  int b = 10;
  
  if(a == b){
    printf("%d and %d are equal!\n\n",a,b);
  }
  else
  {
    printf("%d and %d are not equal!\n\n",a,b);
  }
	
  //nu ændres værdien på a til at være lig med værdien på b!
  a = b;
  if(a == b){
    printf("%d and %d are equal!\n\n",a,b);
  }
  else
  {
    printf("%d and %d are not equal!\n\n",a,b);
  }
  //dette kan gøres med forskellige operatorer
  //fx > , < , <= og >=
  //Prøv de forskellige operatorer selv.
  
  //Der findes flere operatorer med forskellige formål. ++ operatoren
  //tager din variabel og lægger 1 til. så a++ vil blive til 11 fx. lad os prøve!
  
  a++;
  printf("a has now changed value to %d\n\n",a);
  
  //kan du gætte hvad -- operatoren gør? :-)
  
  //% operatoren er lidt speciel, den sammenligner to tal og afgør hvor meget der er tilovers hvis de divideres.
  
  a = 5;
  b = 12;
  
  printf("The remainder of %d / %d is %d\n\n",b,a,b % a);
	return 0;
}