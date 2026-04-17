#include <stdio.h>

int main() {
    int x = 99;
    
    printf("O ngoai x co gia tri: %d\n", x);

    {
        printf("Tu ben trong x = %d\n", x);
        
        x = x + 1;
        printf("Sau khi thay doi x tu ben trong, x hien tai la: %d\n", x);
    }

    printf("Tro lai Outer block, gia tri x cuoi cung la: %d\n", x);

    return 0;
}