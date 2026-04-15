#include <stdio.h>

int main() {
    float a, b, ket_qua;

    printf("Nhap so bi chia (a): ");
    scanf("%f", &a);
    printf("Nhap so chia (b): ");
    scanf("%f", &b);

    if (b == 0) {
        printf("Loi: Khong the chia cho so 0!\n");
    } 
    else {
        ket_qua = a / b;
        
        printf("Ket qua cua %.2f / %.2f = %.2f\n", a, b, ket_qua);
    }

    return 0;
}