#include <stdio.h>

int main() {
    int array[100], search, c, n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }

    
    printf("Enter the key element : ");
    scanf("%d", &search);

    
    for (c = 0; c < n; c++) {
        if (array[c] == search) {
            printf("Element found in array: %d.\n", search, c + 1);
            break;
        }
    }

    if (c == n) {
        printf("%d is not found in array.\n", search);
    }

    return 0;
}

