#include <stdio.h>
#include <assert.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    assert(add(2, 3) == 5);
    assert(add(-1, 4) == 3);
    assert(add(0, 0) == 0);
    printf("✅ All tests passed!\n");
    return 0;
}
