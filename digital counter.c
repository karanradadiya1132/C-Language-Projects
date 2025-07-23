#include <stdio.h>

    int main() {
    int num, count = 0;

    printf("Enter any number: ");
    scanf("%d", & num);

    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    printf("Total number of digits: %d\n", count);

}
 
 
/* Output
   
   Enter any number: 122
   Total number of digits: 3
   
*/
   