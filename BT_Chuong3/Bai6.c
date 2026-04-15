#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap ba so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0) {
        printf("Ca ba so deu la so duong.\n");
    } else {
        printf("Co it nhat mot so khong phai la so duong.\n");
    }

    return 0;
}