#include <stdio.h>

int main() {
    int n;

    printf("Nhap kich thuoc ma tran vuong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Kich thuoc khong hop le.\n");
        return 0;
    }

    int mang[n][n];

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu mang[%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

    printf("Ma tran vuong vua nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}

