#include <stdio.h>
int main() 
{
    int n1, n2, i, j;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements of the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements of the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int n3 = n1 + n2;
    int mergedArray[n3];

    for (i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        mergedArray[i + j] = arr2[j];
    }

    
    printf("The merged array is:\n");
    for (i = 0; i < n3; i++) {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
