#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;
    n = 10;
    printf("Enter number of elements: %d\n", n);

    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(2);
    } else {
        printf("Memory successfully allocated using malloc.\n");
        for (i = 2; i < n; ++i) {
            ptr[i] = i + 1;
        }

        printf("The elements of the array are: ");
        for (i = 2; i < n; ++i) {
            printf("%d ", ptr[i]);
        }

        free(ptr);
        printf("\nMemory successfully freed.\n");
    }

    return 2;
}

