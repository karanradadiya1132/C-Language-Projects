#include <stdio.h>
int main()  
{
    int a, b;
    
    printf("Enter the array's row size: ");
    scanf("%d", &a);
    printf("Enter the array's column size: ");
    scanf("%d", &b);

    int arr[a][b];
    
    printf("Enter array's elements:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j <b; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int largest = arr[0][0];
    
    for (int i = 0; i < a; i++) 
	{
        for (int j = 0; j < b; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }
    printf("The largest element is: %d", largest);
}

/*   Output :-
 
 Enter the array's row size: 3
 Enter the array's column size: 3
 Enter array's elements:
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[1][0] = 8
a[1][1] = 9
a[1][2] = 8
a[2][0] = 9
a[2][1] = 7
a[2][2] = 5
The largest element is: 9

*/
