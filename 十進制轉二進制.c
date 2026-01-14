#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    unsigned char x = (unsigned char)a;  
    for (int i = 7; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");

    return 0;
}
