#include <stdio.h> 



int main() {


   /* Basic for loop implementation of a temperature converter*/

  int fahr;

   printf("\n%-10s | %s", "Fahrenheit", "Celsius");
   printf("\n%-10s-+-%s\n", "----------", "-------");

   for(fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%10d | %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
   }    


   return 0;

}
