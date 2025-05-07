#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Hunerler(float itemPrice, float* donationTotal, float* profitTotal);

int main(void)
{
	float itemPrice;
	float donationTotal = 0.0;
	float profitTotal = 0.0;
	srand(time(0));
	FILE *fptr;
	
	fptr = fopen("donations.txt","a+");
	
	for( int i=0; i<50; i++ )
	{ 
		itemPrice = rand()%2001;
		itemPrice = itemPrice / 100;
		printf("%2d)Item is %8.2f$\n", i+1, itemPrice);
		printf("   Donation is %3.2f$\n", itemPrice - floor(itemPrice));
		printf("   Profit is %6.2f$\n\n", floor(itemPrice));
		
		Hunerler(itemPrice, &donationTotal, &profitTotal);
		
		fprintf(fptr, "%2d)Item is %8.2f$\n", i+1, itemPrice);
		fprintf(fptr, "   Donation is %3.2f$\n", itemPrice - floor(itemPrice));
		fprintf(fptr, "   Profit is %6.2f$\n\n", floor(itemPrice));
		
	}
		
	printf(" --------------------\n   Donation is %.2f$\n", donationTotal);
	printf("   Profit is %8.2f$\n --------------------\n", profitTotal);
	fprintf(fptr, " --------------------\n   Donation is %.2f$\n", donationTotal);
	fprintf(fptr, "   Profit is %8.2f$\n --------------------\n", profitTotal);
	
	fclose(fptr);
	
	return 0;	
}	

void Hunerler(float itemPrice, float* donationTotal, float* profitTotal)
{
	*donationTotal += itemPrice - (int)itemPrice;
	*profitTotal += (int)itemPrice;
}
