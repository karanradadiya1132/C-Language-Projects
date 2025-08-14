#include <stdio.h>
int findCubes(int *ptr, int rows, int cols) 
{
    printf("\nCubes of all elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int element = *ptr;      
            int cube = element * element * element; 
            printf("%d\t", cube);
            ptr++;
        }
        printf("\n");
    }
}

    int main() {
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int arr[size][size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d]-", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes((int *)arr, size, size);
}


/* 
    Output:-
    
Enter array's size: 2
Enter array elements:
a[0][0]-1
a[0][1]-2
a[1][0]-3
a[1][1]-4

Cubes of all elements:
1       8
27      64

*/