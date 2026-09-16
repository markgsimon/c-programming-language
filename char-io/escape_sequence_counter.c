#include <stdio.h> 




int main () {


   long bc, tc, nc;

   bc = 0;
   tc = 0;
   nc = 0;

   char c;

   while ((c = getchar()) != EOF) {
      if(c == ' '){
          bc++;
      } else if(c == '\t'){
          tc++;
      } else if (c == '\n') {
          nc++;
      }
   }

   printf("\nBlank Count: %ld\nTab Count: %ld\nNewline Count: %ld\n", bc, tc, nc);

   return 0;
}
