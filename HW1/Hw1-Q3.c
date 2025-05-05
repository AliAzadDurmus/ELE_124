#include <stdio.h>
#include <math.h>

int main()
{
	int popularity;
	int size;
	int homeValue;
	
	printf("Enter popularity: ");
	scanf("%d", &popularity);
	printf("Enter size: ");
	scanf("%d", &size);
	
	homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;
	
	printf("Home value is: %d\n", homeValue);
	
	return (0);
}
	
/*	START

Enter popularity: 5
Enter size: 2
Home value is: 1290000

END	*/