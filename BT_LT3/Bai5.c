#include <stdio.h>

void increment_static() {
    static int counter = 0;
    counter++;
    printf("Static counter: %d\n", counter);
}

void increment_non_static() {
    int counter = 0;
    counter++;
    printf("Non-static counter: %d\n", counter);
}

int main() {
    printf("Goi ham voi bien STATIC\n");
    increment_static();
    increment_static();
    increment_static();

    printf("\nGoi ham voi bien NON-STATIC\n");
    increment_non_static();
    increment_non_static();
    increment_non_static();

    return 0;
}