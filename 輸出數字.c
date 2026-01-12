#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int n1 = n / 1000;
    printf("%d\n", n1);
    n = n - n1 * 1000;
    int n2 = n / 100;
    printf("%d\n", n2);
    n = n - n2 * 100;
    int n3 = n / 10;
    printf("%d\n", n3);
    n = n - n3 * 10;
    printf("%d", n);
    return 0;
}
