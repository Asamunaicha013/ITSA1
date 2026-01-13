#include <stdio.h>

int main(){
    double height, weight;
    scanf("%lf %lf", &weight, &height);
    height = height / 100.0;
    double BMI = weight / (height * height);
    printf("%.2f", BMI);
    return 0;
}
