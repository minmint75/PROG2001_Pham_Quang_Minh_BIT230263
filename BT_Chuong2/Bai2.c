#include <stdio.h>

int main() {

    int n;
    float n_sau_ep_kieu;

    float f;
    int f_sau_ep_kieu;

    printf("1. Nhap 1 so nguyen: ");
    scanf("%d", &n);

    n_sau_ep_kieu = (float)n;
    printf("Gia tri khhi ep sang so thuc: %.2f\n", n_sau_ep_kieu);

    printf("2. Nhap 1 so thuc: ");
    scanf("%f", &f);

    f_sau_ep_kieu = (int)f;
    printf("Gia tri sua khi ep sang so nguyen: %d\n", f_sau_ep_kieu);

    return 0;
}