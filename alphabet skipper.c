#include <stdio.h>

    int main() {
    char ch = 'a';

    printf("Alphabet Skipper Output:\n");

    do {
        printf("%c ", ch);
        ch += 4;
    } while (ch <= 'z');

}
 
/*
Sample Output:

Alphabet Skipper Output:
a e i m q u y

*/