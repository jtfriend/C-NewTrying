#include <stdio.h>
#include <stdlib.h>

int concatenate(int x, int y);

int main()
{
   int i, n, random_number, concat, old_random_number[8], no_gap, one_gap, two_gap, three_gap;
   time_t t;
   concat = no_gap = one_gap = two_gap = three_gap = 0;
   n = 10000;

   /* Intializes random number generator */
   srand((unsigned) time(&t));


   for( i = 0 ; i < 8 ; i++ )
   {
     old_random_number[i] = 0;
   }

   for( i = 0 ; i < n ; i++ )
   {
      random_number = rand() % 10;

      printf("%d\n", random_number);
      if (old_random_number[0] == random_number)
      {
        no_gap++;
      }

      if (old_random_number[1] == random_number )
      {
        one_gap++;
      }

      if (old_random_number[2] == random_number )
      {
        two_gap++;
      }

      if (old_random_number[3] == random_number )
      {
        three_gap++;
      }

      old_random_number[0] = random_number;
      old_random_number[1] = old_random_number[0];
      old_random_number[2] = old_random_number[1];
      old_random_number[3] = old_random_number[2];
      old_random_number[4] = old_random_number[3];
      old_random_number[5] = old_random_number[4];

   }

  printf("No gap %d\n",no_gap);
  printf("One gap %d\n",one_gap);
  printf("Two gap %d\n",two_gap);
  printf("Three gap %d\n",three_gap);


  //haha test

   return(0);
}
