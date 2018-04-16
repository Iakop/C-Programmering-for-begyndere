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
    printf("the numbers are equal!\n");
  }
  else
  {
    printf("the numbers are not equal!\n");
  }
	
  //nu ændres værdien på a til at være lig med værdien på b!
  a = b;
    if(a == b){
    printf("the numbers are equal!\n");
  }
  else
  {
    printf("the numbers are not equal!\n");
  }
  //dette kan gøres med forskellige operatorer
  //fx > , < , <= og >=
  //Prøv de forskellige operatorer selv.
  
  //Der findes flere operatorer med forskellige formål. ++ operatoren
  //tager din variabel og lægger 1 til. så a++ vil blive til 11 fx. lad os prøve!
  
  a++;
  printf("a has changed value to %d\n",a);
  
  //kan du gætte hvad -- operatoren gør? :-)
  
  //% operatoren sammenligner to tal og afgør hvor meget der er tilovers hvis de divideres.
  
  a = 5;
  b = 12;
  
  printf("The remainder of the numbers is %d\n",b % a);
	return 0;
}
