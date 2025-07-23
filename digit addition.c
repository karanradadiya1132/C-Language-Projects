#include <stdio.h>

    int main() {
    int number, firstDigit, lastDigit, originalNumber;

    printf("Enter any number: ");
    scanf("%d", & number);

    originalNumber = number;          
    lastDigit = number % 10;     

    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

    int sum = firstDigit + lastDigit;

    printf("The sum of the first and the last digit: %d\n", sum);

}

/*Output
 
  Enter any number: 456
  The sum of the first and the last digit: 10
  
  
*/