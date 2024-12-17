#include <stdio.h>

int main() {
    int mang[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = 10;
    int phan_tu, tim_thay = 0;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &phan_tu);

    for (int i = 0; i < n; i++) {
        if (mang[i] == phan_tu) {
            printf("Vi tri phan tu trong mang la %d\n", i);
            tim_thay = 1;
            break;
        }
    }

    if (!tim_thay) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}

