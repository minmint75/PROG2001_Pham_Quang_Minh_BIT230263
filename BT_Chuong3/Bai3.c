#include <stdio.h>

int main() {
    int x = 10;
    printf("Gia tri x ben ngoai khoi lenh: %d\n", x);

    {

        int x = 20;
        printf("Gia tri x ben trong khoi lenh: %d\n", x);
    }

    printf("Gia tri x sau khi thoat khoi lenh: %d\n", x);

    return 0;
}