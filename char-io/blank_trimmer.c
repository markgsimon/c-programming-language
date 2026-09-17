#include <stdio.h> 


int main () {

   char c;

   
   while((c = getchar()) != EOF) {
      
     if(c == ' '){
         putchar(c);
         while(c == ' '){
            c = getchar();
         }
     }
     putchar(c);
   }

   return 0;

}
