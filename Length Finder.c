#include <stdio.h>
int stringLength(char *ptr) 
{
    char *start = ptr;  
    while (*ptr)
	{       
        ptr++;
    }
    return ptr - start;
}

    int main() {
    char str[100];

    printf("Enter any string: ");
    scanf("%[^\n]", str); 

    int len = stringLength(str);
    printf("The length of a string is: %d\n", len);
}
 
 
/* 
   OutPut:-
  Enter any string: karan radadiya
  The length of a string is: 14


*/