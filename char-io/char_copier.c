#include <stdio.h> 


/* Copy input to output one char at a time */


int main() {



   int c;

   while ((c = getchar()) != EOF) {
      putchar(c);
      c = getchar();

   }
   
   return 0;

}
