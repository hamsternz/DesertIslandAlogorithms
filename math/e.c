/*********************************************************************
 * e.c : A simple algorithm to calculate the mathimatical constant 'e'
 ********************************************************************/
#include <stdio.h>
#include <math.h> /* for the exp() function */

double my_e() {
   double factorial = 1.0, e = 1.0;

   for(int i = 1; i < 18; i++) {
      factorial *= i;
      e += 1.0/factorial;
   }
   return e;
}

int main(int argc, char *argv[]) {
   printf("e is %f\n", my_e());
   printf("error is %e\n",exp(1.0) - my_e());

   return 0;
}
