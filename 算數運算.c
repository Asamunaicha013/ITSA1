#include <stdio.h>
#include <math.h>

int main(){
    int number;
    scanf("%d", &number);
    for(int i = 0; i < number; i++){
        double m;
        scanf("%lf", &m);
        double area = m * m;
        area = round(area * 10) / 10.0;
        printf("%.1f\n", area);
    }
    return 0;
}
