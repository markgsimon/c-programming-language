 #include <stdio.h> 


/* Count digits, white space characters others */
int main () {

    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++ ){
       ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
       if ( c >= '0' && c <= '9') { // isDigit condition
          ++ndigit[ c - '0'];
       } else if ( c == ' ' || c == '\n' || c == '\t') {    // isWhitespace char condition
          ++nwhite;
       } else {
          ++nother;
       }
    }


    printf("\ndigits = ");
    for (i = 0; i < 10; i++) {
       printf(" %d", ndigit[i]);
    }
    printf(" , white space = %d, other = %d\n", nwhite, nother);



   return 0;
}
