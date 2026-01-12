#include <stdio.h>

int main(){
    int m, n , h;
    scanf("%d %d %d", &m, &n, &h);
    double area = (m + n) * h / 2.0;
    printf("Trapezoid area:%.1f", area);
    return 0;
}
