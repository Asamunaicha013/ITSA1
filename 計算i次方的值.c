#include <stdio.h>

int main() {
    int number;
    long long a;
    scanf("%d", &number);

    for (int i = 0; i < number; i++) {
        scanf("%lld", &a);

        if (a > 31) {
            printf("Value of more than 31\n");
        } else {
            long long b = 1LL << a;
            printf("%lld\n", b);
        }
    }
    return 0;
}
