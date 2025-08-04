#include <stdio.h>
int main() 
{
    
	int a;  
    printf("Enter the array's row & column size: ");
    scanf("%d", &a);

    int arr[a][a];

    printf("Enter array's elements:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The transpose matrix of an array:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}


/* Output 

   Enter the array's row & column size: 3
Enter array's elements: 
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[1][0] = 4
a[1][1] = 5
a[1][2] = 6
a[2][0] = 7
a[2][1] = 8
a[2][2] = 9

The transpose matrix of an array:
1 4 7
2 5 8
3 6 9

*/
