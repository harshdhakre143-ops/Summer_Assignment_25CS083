#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        return 1;
    }

    do {
        count++;
        num /= 10;
    } while (num != 0);

    printf("Total digits: %d\n", count);

    return 0;
}
