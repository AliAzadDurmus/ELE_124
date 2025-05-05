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
	
	for( int i=0; i<50; i++ )
	{ 
		itemPrice = rand()%1999 + 1;
		itemPrice = itemPrice / 100;
		printf("Item is %.2f\n", itemPrice);
		Hunerler(itemPrice, &donationTotal, &profitTotal);
	}
	
	printf("Donation is %.2f\n", donationTotal);
	printf("Profit is %.2f\n", profitTotal);
	
	return 0;
}	

void Hunerler(float itemPrice, float* donationTotal, float* profitTotal)
{
	*donationTotal += itemPrice - (int)itemPrice;
	*profitTotal += (int)itemPrice;
} 
