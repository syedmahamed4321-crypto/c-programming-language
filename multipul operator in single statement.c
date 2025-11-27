#include <stdio.h>
int main() {
    int a = 5;
    int result = (a += 5, a *= 4, a - 20);
    printf("result = %d", result);
    return 0;
}
