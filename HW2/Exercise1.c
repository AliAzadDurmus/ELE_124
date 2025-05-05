#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float aRandomNumber ;
	
	for( int i=0; i<50; i++ )
	{ 
		aRandomNumber = rand()%2001;
		printf("%2d.Rand modulo 2001 gives gives %.2f \n", i+1, aRandomNumber);
		aRandomNumber = aRandomNumber / 100;
		printf("   We divide by 100 to get %.2f \n \n", aRandomNumber);
	}
	system("pause");
} 
