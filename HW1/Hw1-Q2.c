/* Addition program */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int integer1; /* first number to be input by user,(semicolon is missing)*/
   int integer2; /* second number to be input by user,(semicolon is missing)*/
   int sum;      /* variable in which sum will be stored,(wrong variable name)*/ 

   printf("Enter first integer\n" ); /* prompt,(double quotes are missing)*/
   scanf( "%d", &integer1 );        /* read an integer */

   printf( "Enter second integer\n" ); /* prompt */
   scanf( "%d", &integer2 );           /* read an integer */
   
   sum = integer1 + integer2; /* assign total to sum */

   printf( "Sum is %d\n", sum ); /* print sum */
   return 0; /* indicate that program ended successfully */

} /* end function main */

/*	START

Enter first integer
4
Enter second integer
5
Sum is 9

END	*/