#include <stdio.h>
#include <math.h>

int main (){
    int x1, x2, y1, y2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    int d1 = pow((x1 - x2), 2);
    int d2 = pow((y1 - y2), 2);
    int d3 = d1 + d2;
    double distance = sqrt(d3);
    printf("%.2f", distance);
    return 0;
}
