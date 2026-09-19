#include <stdio.h> 



#define IN 1     // whether in a word
#define OUT 0    // outside a word



/* Small program to count words, lines, characters*/
int main () {


    int c, nl, nw, nc, state;
    
    nl = nw = nc = 0;
    state = OUT;
    
    while((c = getchar()) != EOF) {
       ++nc;  // increment num_char

       if (c == '\n') {
          ++nl;      // if newline, increment num lines
       }

       if(c == '\n' || c == '\t' || c == ' ')  { //if out of a word, set state to out
          state = OUT; 
       } else if  ( state == OUT ){
          state = IN;
          ++nw;      // increment num words
       }   

    }

    printf("Number of lines: %d\nNumber of Words: %d\nNumber of Characters: %d\n", nl, nw, nc );
    return 0;
 }
