#include <stdio.h>
int main() {
    int a = 30, b = 20, c = 10;
    int largest;
    largest = (a > b) ?
                ((a > c) ? a : c) :
                ((b > c) ? b : c);
    printf("Largest = %d", largest);
    return 0;
}
