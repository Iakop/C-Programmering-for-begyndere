#include <stdio.h>

// Vi sætter en struct op for data vedr. bøger:
struct book{
	char title[40]; // Bogens titel
	char author[40]; // Bogens forfatter
	float price; // Bogens pris
	int stars; // Bogens rating fra 1-5
};

union varchar{
	int digit;
	double bigFloat;
	char letter;
};

enum varcharType {digit, bigFloat, letter};

int main(void)
{
	// Vi kan tage input, som normalt, og have det hele holdt i en samlet pakke, der omhandler en bog!
	struct book singleBook;
	printf("Please enter the book's title: ");
	scanf("%s", &singleBook.title);
	printf("Please enter the book's author: ");
	scanf("%s", &singleBook.author);
	printf("Please enter the book's price: ");
	scanf("%f", &singleBook.price);
	printf("Please enter the book's rating from 0-5: ");
	scanf("%d", &singleBook.stars);
	// Vi retter lige stjernerne, så der ikke er for mange eller få:
	if(singleBook.stars > 5){
		printf("Too high rating, lowered to max 5!\n");
		singleBook.stars = 5;
	}
	else if(singleBook.stars < 0){
		printf("Too low rating, raised to min 0!\n");
		singleBook.stars = 0;
	}
	
	// Print al infoen ud:
	printf("%s written by %s costs %f DKK, and gets %d stars out of 5\n", singleBook.title, singleBook.author, singleBook.price, singleBook.stars);
	
	// Et forslag til hvordan man håndterer unions:
	union varchar varA;
	enum varcharType varAtype = digit;
	varA.digit = 12;
	
	return 0;
}
