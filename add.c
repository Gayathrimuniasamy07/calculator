#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input\n");
        return 1;
    }
    printf("Sum = %d\n", add(x, y));
    return 0;
}
