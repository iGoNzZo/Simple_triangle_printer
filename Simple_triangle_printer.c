#include <stdio.h>

int xCounter;
int yCounter;
int bCount;

main(void)	{
	//part a
	printf("(A)");
	for(yCounter = 1; yCounter <= 10; yCounter++)	{
		for(xCounter = 1; xCounter < yCounter; xCounter++)	{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	//part b
	printf("(B)\n");
	for(yCounter = 10; yCounter > 0; yCounter--)	{
		for(xCounter = yCounter; xCounter > 0; xCounter--)	{
			printf("*");
			
		}
		printf("\n");
	}
	printf("\n");
	
	//part c
	printf("(C)\n");
	for(yCounter = 1; yCounter <= 10; yCounter++)	{
	
		for(bCount = 1; bCount <= yCounter - 1; bCount++)	
			printf(" ");
			
			for(xCounter = 1; xCounter <= 11 - yCounter; xCounter++)	
				printf("*");
				
		
		printf("\n");
	}
	printf("\n");
	
	//part d
	printf("(D)\n");
	for(yCounter = 1; yCounter <= 10; yCounter++)	{
	
		for(bCount = 1; bCount <= 10 - yCounter; bCount++)	
			printf(" ");
		
			for(xCounter = 1; xCounter <= yCounter; xCounter++)
				printf("*");
				
	printf("\n");
	}	
}
