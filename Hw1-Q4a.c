#include <stdio.h>
#include <math.h>

int computeHomeValue(int popularity, int size);

int main(void)
{
	int popularity;
	int size;
	
	printf("Enter the popularity: ");
	scanf("%d", &popularity);
	printf("Enter the size: ");
	scanf("%d", &size);
	
	printf("Home valuse is: %d", computeHomeValue(popularity, size));
	
	return (0);
}

int computeHomeValue(int popularity, int size)
{
	return (pow(popularity, 3) + pow(size, 2)) * 10000;
}