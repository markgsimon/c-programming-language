#include <stdio.h>


int main() {


   float fahr, celsius;
   int lower, upper, step;
   
   lower = 0;
   upper = 300;
   step = 20;



   printf("\n%-8s | %s\n", "Celsius", "Fahrenheit");
   printf("%-8s-+-%s\n", "--------", "----------");


   fahr = lower;

   while(fahr <= upper) {
      celsius = (5.0/9.0) * (fahr - 32.0);
      printf("%8.1f | %3.0f\n", celsius, fahr);
      fahr = fahr + step;
   }

   printf("\n");

   return 0;


}
