    #include <stdio.h>

    int main()
{
	int a1, b1, c1;

	printf("Enter angle a: ");
	scanf("%d", &a1);

	printf("Enter angle b: ");
	scanf("%d", &b1);

	c1 = 180 - (a1 + b1);

	printf("Third angle = %d \n", c1);

}
/*  
    Output:
    Angle a : 60
    Angle b : 45
    Angle c = 75 
*/