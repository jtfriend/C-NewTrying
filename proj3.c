#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n, random_number, total;
   time_t t;
   total = 0;
   n = 10000;

   float odd, even;
   /* Intializes random number generator */
   srand((unsigned) time(&t));



   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n ; i++ )
   {
     random_number = rand() % 10;
     total = total + random_number;
     //printf("%d\n", random_number);
     odd = odd + random_number%2;
   }

     printf("Odd:%f\n",odd/100);
     printf("Even:%f\n",100-(odd/100));


   printf("Total = %d\n", total);

   printf("Mean = %d\n", total/n);

   return(0);
}
