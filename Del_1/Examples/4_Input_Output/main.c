#include <stdio.h>

int main(int argc, char **argv)
{
  float input;
  
  //scanf funktionen tager imod input fra brugeren, i dette tilfælde fra tastaturet
  printf("Please input a number: "); //først printes info til brugeren
  scanf("%f",&input); //vi vil modtage en float værdi. & tegnet gemmer den modtagne værdi i variablen som følger tegnet.
  
  printf("\nHere is your entered number: %.2f\n\n",input);
  
  //dette bruges ofte, her følger et eksempel med simpel matematik
  float input1;
  float input2;
  printf("enter two numbers to be multiplied, hit enter after each number:\n");
  scanf("%f %f",&input1,&input2);

  float result = input1 * input2; //ny variabel for overblikkets skyld
  printf("result: %.2f * %.2f = %.2f\n\n",input1,input2,result);
  
	return 0;
}