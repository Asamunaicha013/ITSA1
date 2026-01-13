#include <stdio.h>
#include <math.h>

int main(){
    double m;
    scanf("%lf", &m);
    double n = m / 23.8 * 100.0;
    printf("%.lf", ceil(n));
}
