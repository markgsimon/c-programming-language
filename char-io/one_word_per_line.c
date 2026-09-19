#include <stdio.h> 


#define OUT 0   // out of a word
#define IN 1   // in a word



int main() {

   // declarations
   char c;
   int state;

   // instantiations
   state = OUT;

   while ((c = getchar()) != EOF) {
      
      if(c == ' ' || c == '\t' || c == '\n') {
          state = OUT;
          putchar('\n');
      } else if(state == OUT){
          state = IN;
          putchar(c);
      } else {
         putchar(c);
      }

   }


   return 0;
}
