/*********************************************************************
 * e.c : A simple algorithm to calculate the mathimatical constant 'e'
 ********************************************************************/
#include <stdio.h>
#include <math.h> /* for M_PI */

double my_pi(void) {
   double pi_4th = 0;
   int i;
   for(i = 1; i < 20000; i+=4) {
     pi_4th += 1.0/i - 1.0/(i+2);
   }
   // Approximate the additional terms
   pi_4th += 0.5/(i-1);

   return 4*pi_4th;
}

int main(int argc, char *argv[]) {
   printf("pi is %18.15f\n", my_pi());
   printf("error is %18.15f\n",M_PI - my_pi());
   return 0;
}
