#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n, random_number, total;
   time_t t;
   total = 0;
   n = 10000;

   int array[10];
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   for( i = 0 ; i < 10 ; i++ )
   {
     array[i] = 0;
   }

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n ; i++ )
   {
     random_number = rand() % 10;
     total = total + random_number;
     //printf("%d\n", random_number);
     array[random_number]++;
   }


   for( i = 0 ; i < 10 ; i++ )
   {
     printf("%d : %d\n",i, array[i]/100);
   }

   printf("Total = %d\n", total);

   printf("Mean = %d\n", total/n);

   return(0);
}
