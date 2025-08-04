#include <stdio.h>

    int main() 
{
    int n;
    printf("Enter the array's size: ");
    scanf("%d", &n);

    int arr[5];
    
    printf("Enter array's elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Negative elements from an Array: ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
}

/*  Output 

  Enter the array's size: 5
  Enter array's elements:
  a[0] = 1
  a[1] = -2
  a[2] = 3
  a[3] = -4
  a[4] = -5
  Negative elements from an Array: -2 -4 -5

*/
 