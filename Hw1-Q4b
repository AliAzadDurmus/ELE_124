#include <stdio.h>
#include <math.h>

void computeHomeValue(void);

int main(void)
{
	computeHomeValue();
	
	return (0);
}

void computeHomeValue(void)
{
	int popularity;
	int size;
	int homeValue;
	
	printf("Enter the popularity: ");
	scanf("%d", &popularity);
	printf("Enter the size: ");
	scanf("%d", &size);
	
	homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;
	
	printf("Home value is: %d", homeValue);
}