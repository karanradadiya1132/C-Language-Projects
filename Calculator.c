#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulus(int a, int b);

int main() {
    int choice, num1, num2;

    while (1) 
	{  
        printf("\n=== Calculator Menu ===\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                printf("Division of %d and %d is %.2f\n", num1, num2, divide(num1, num2));
                break;
            case 5:
                printf("Modulus of %d and %d is %d\n", num1, num2, modulus(num1, num2));
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

 
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero not allowed.\n");
        return 0;
    }
    return (float)a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero not allowed.\n");
        return 0;
    }
    return a % b;
}
/* Output


=== Calculator Menu ===
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for Exit
Enter your choice: 1
Enter the first number:
10
Enter the second number: 20
Addition of 10 and 20 is 30

=== Calculator Menu ===
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for Exit
Enter your choice: 2
Enter the first number: 10
Enter the second number: 20
Subtraction of 10 and 20 is -10

=== Calculator Menu ===
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for Exit
Enter your choice: 3
Enter the first number: 10
Enter the second number: 20
Multiplication of 10 and 20 is 200

=== Calculator Menu ===
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for Exit
Enter your choice: 4
Enter the first number: 10
Enter the second number: 20
Division of 10 and 20 is 0.50

=== Calculator Menu ===
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for Exit
Enter your choice: 5
Enter the first number: 10
Enter the second number: 20
Modulus of 10 and 20 is 10

=== Calculator Menu ===
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for Exit
Enter your choice: 0
Exiting the program. Goodbye! 
*/