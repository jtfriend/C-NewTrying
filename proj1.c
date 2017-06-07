#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n, random_number, total;
   time_t t;
   total = 0;
   n = 1000;

   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n ; i++ )
   {
     random_number = rand() % 10;
     total = total + random_number;
     printf("%d\n", random_number);
   }

   printf("Total = %d\n", total);

   printf("Mean = %d\n", total/n);

   return(0);
}
