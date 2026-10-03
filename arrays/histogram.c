/*
* Histogram program that prints both a vertical and horizontal histogram 
* of word length frequencies of words typed by the user in the tty
* Authored by: Mark Simon
*/
#include <stdio.h> 


/*
* The external variable here is just a constant used as a constraint on this program
* The reasoning here, is that 99.99% of english language words are of 20 chars or less
* This constraint allows for a reasonable user experience while allowing for error handling
*/
#define MAX_WORD_LENGTH 20    


// Constants to know whether in or out of a word
#define IN              1
#define OUT             0



int main () {

   // counter to keep track of word length, set to 0 on out, increment as long as still IN
   int word_length_counter = 0;

   int max_word_length_frequency = 0;   // stuck on this thing for now 
   
   // current state to keep track of whether in or out of a word
   int state = OUT;

   // the current character being scanned
   int c;

   // array to store word frequencies
   int word_length_frequencies[MAX_WORD_LENGTH] = {0};


   // The while loop to gather character input, count word length frequencies, 
    
   while ((c = getchar()) != EOF) {

      // Exiting a word
      if (c == '\n' || c == '\t' || c == ' ') {
         state = OUT;
         // increment the counter for the corresponding freq in the wl frequencies array
         ++word_length_frequencies[word_length_counter-1];
          
          if (word_length_frequencies[word_length_counter-1] > max_word_length_frequency){
             max_word_length_frequency = word_length_frequencies[word_length_counter-1];
          }    
          word_length_counter = 0;
      } else if (state == OUT) {
         state = IN;
      }
      
      if (state == IN) {
         ++word_length_counter;
      }
   } 



  /*
  * Loop to display horizontal histogram first 
  */
  printf("\n\n");
  for (int i = 0; i < 20; i++) { 
    
    if (word_length_frequencies[i] > 0) {
       printf("%d   ", i + 1);
       for (int j = 0; j < word_length_frequencies[i]; j++) {
         printf("*");    
       }
       printf("\n");
    }
  }

  /*
  *  Loop to print vertical histogram
  */

  printf("\n\n\n");

  for (int i = max_word_length_frequency; i >= 0; i--) {   

    for (int j = 0; j < MAX_WORD_LENGTH; j++) {
       // spacing between columns default
       if (i != 0) {
           printf("  ");
       }
       // bottom row footer
       if (i == 0) {

          if (j+1 > 9) {
            printf(" ");
          } else {
            printf("  ");
          }

          if(word_length_frequencies[j] != 0 ){
             printf("%d", j+1);
          }
          continue;
       }
            
       if (word_length_frequencies[j] >= i) {
          printf("*");
       } else {
          printf(" ");
       }    

    }
    printf("\n");
  }
 printf("\n");

 return 0;
}
