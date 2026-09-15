#include <stdio.h> 


/*
* The purpose of this program is print a table of fahrenheit temperatures
* and their celsius equivalents given the following formula:
* C = (5/9) (F - 32)
* for fahr = 0,.... 300
*/

int main() {


   // Variable declaration
   float fahr, celsius;
   int lower, upper, step;


   // Variable instantiaton
   lower = 0;     // lower limit of temperature
   upper = 300;   // upper limit of temperature
   step = 20;     // step in between temperatures to calculate, e.g. +20 


   // write code here to do the work
   printf("\n%-10s | %s\n", "Fahrenheit", "Celsius");
   printf("%-10s-+-%s\n", "----------", "-------");
   
   fahr = lower;
   while(fahr <= upper) {
      celsius = (5.0 / 9.0) * (fahr - 32.0);
      printf("%10.0f |\t%3.1f\n", fahr, celsius);
      fahr = fahr + step; 
   }

   return 0;

}
