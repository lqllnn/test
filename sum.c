#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 0; i <= 100; i++) {
        sum += i;
    }

    printf("从0到100的和为: %d\n", sum);
    return 0;
}
