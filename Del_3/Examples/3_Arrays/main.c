#include <stdio.h>

// Vi kan definere en længekonstant vha. preprocessor makroen
// #define MAXLENGTH 20
#define MAXLENGTH 20

int main(void)
{
	// Vi sætter 20 chars af til inputString:
	char inputString[MAXLENGTH];
	
	// Prompt for en string respons:
	printf("I am a mind reading robot\nInput what's on your mind, and I'll read it: ");
			
	// Den sendes til inputString adressen:
	scanf("%s", &inputString);
	
	// Og outputtes derfra igen!
	printf("\nAha! You are thinking of %s!\n", inputString);
	
	// Lad os prøve at sætte tal i et array og lægge dem sammen:
	printf("\nNow give me five numbers to add together:\n");
	
	// Vi deklarerer vores array:
	float numbers[5];
	// Og så fylder vi det med brugerinput:
	scanf("%f %f %f %f %f", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
	
	// Nu skal det summeres:
	float sum = 0;
	for(int i = 0; i < 5; i++){
		// For hvert gennemløb, bliver der lagt en værdi mere til:
		sum += numbers[i];
	}
	
	//Og nu printes svaret:
	printf("\nEasy! That's %.2f!\nSee ya!\n", sum);
	
	return 0;
}
