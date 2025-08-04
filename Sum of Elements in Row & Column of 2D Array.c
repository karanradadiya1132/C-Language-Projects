#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the array's row size: ");
    scanf("%d", &a);
    printf("Enter the array's column size: ");
    scanf("%d", &b);

    int arr[a][b];
    printf("Enter array's elements:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int x;
    printf("Enter row number: ");
    scanf("%d", &x);
    int sum1 = 0;
    printf("Elements of row %d: ", x);
    for (int j = 0; j < b; j++) {
        printf("%d ", arr[x][j]);
        sum1 += arr[x][j];
    }
    printf("\nThe sum of row %d: %d\n", x, sum1);

    int y;
    printf("Enter column number: ");
    scanf("%d", &y);
    int sum2 = 0;
    printf("Elements of column %d: ", y);
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i][y]);
        sum2 += arr[i][y];
    }
    printf("\nThe sum of column %d: %d", y, sum2);
}

/* Output 

 Enter the array's row size: 3
 Enter the array's column size: 3
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
 Enter row number: 1
 Elements of row 1: 4 5 6
 The sum of row 1: 15
 Enter column number: 1
 Elements of column 1: 2 5 8
 The sum of column 1: 15

*/