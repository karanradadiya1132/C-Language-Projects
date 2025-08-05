#include <stdio.h>
int main() 
{
    char str[50];
    int i, j, length = 0, isPalindrome = 1;


    printf("Enter any string: ");
    gets(str);
  
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is not a Palindrome.\n");

}

/* Output 

Enter any string: nayan
The given string is a Palindrome. 
  
Enter any string: karan
The given string is not a Palindrome.

*/

