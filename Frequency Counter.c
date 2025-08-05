#include <stdio.h>
int main()
{
    char str[50];
    int i, length = 0;
    int a[256] = {0};  

    
    printf("Enter any string: ");
    gets(str);
 
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }
   
    for (i = 0; i < length; i++) {
        a[(int)str[i]]++;
    }

    printf("\nFrequency of each character:\n");
    for (i = 0; i < 256; i++) 
	{
        if (a[i] != 0)
            printf("%c => %d\n", i, a[i]);
    }

}  

/*  Output 
 Enter any string: karan

 Frequency of each character:
a => 2
k => 1
n => 1
r => 1

*/
