#include <stdio.h>

int main(void)
{
	//nu skal vi prøve at sammensætte et lidt større program
  
  //først giver vi brugeren nogle valg!
  printf("What would you like to do?\n\n"
          "1: add\n2: multiply\n3: divide\n\n");
  //nu skal vi have brugeren til at vælge
  int choice; //her deklareres en variabel som brugeren giver en værdi
  scanf("%d",&choice);
  
  float a;
  float b;
  printf("now choose your two numbers\n");
  scanf("%f %f",&a,&b);
  //switch anvender værdien i parantesen til at vælge en case.
  switch(choice)
  {
    case 1://her skal bruges kolon
    printf("\n%.2f added to %.2f = %.2f\n",a,b,a+b);
    break; //alle cases skal afsluttes med break;
    
    case 2:
    printf("\n%.2f multiplied by %.2f = %.2f\n",a,b,a*b);
    break; 
    
    case 3:
    printf("\n%.2f divided by %.2f = %.2f\n",a,b,a/b);
    break;

    default: //Hvis ingen andre cases opfyldes, udføres default.
    break;
  }
}
