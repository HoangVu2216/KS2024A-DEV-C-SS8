#include <stdio.h>

int main() {
    int mang[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Cac phan tu cua mang tu cuoi ve dau:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    return 0;
}

