# include <stdio.h>

int main()

{
    int C;
    float Fahrenheit;
    
    printf("Enter the temperature in Celsius:");
    scanf("%d", & C);
    
    Fahrenheit = (C*9/5)+32;
    printf("The temperature in Fahrenheit : %0.1f",Fahrenheit);
}
 
/*
   Output:
   Enter temperature : 42
   Temperature in Fahrenheit: 107.00
*/