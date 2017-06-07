#include <stdio.h>
#include <stdlib.h>

int concatenate(int x, int y);

int main()
{
   int i, n, random_number1, random_number2, concat;
   time_t t;
   concat = 0;
   n = 10000;

   /* Intializes random number generator */
   srand((unsigned) time(&t));

   float array[100];

   for( i = 0 ; i < 100 ; i++ )
   {
     array[i] = 0;
   }

   for( i = 0 ; i < n ; i++ )
   {
     random_number1 = rand() % 10;
     random_number2 = rand() % 10;
     printf("%d%d\n", random_number1, random_number2);
     concat = concatenate(random_number1,random_number2);
     array[concat]++;
     printf("%d\n", concat);
     //array[concat]++;
   }

   for( i = 0 ; i < 100 ; i++ )
   {
     printf("%d : %f\n",i, array[i]/100);
   }

   return(0);
}


int concatenate(int x, int y) {
    int pow = 10;
    while(y >= pow)
        pow *= 10;
    return x * pow + y;
}
