#include <stdio.h>

int main(){
    int hour,salary;
    scanf("%d %d", &hour, &salary);
    int temp = 0;
    double tot = 0;
    if(hour <= 60){
        tot = hour * salary;
        printf("%.1f", tot);
    }
    else if(hour > 60 && hour <= 120){
        tot = 60 * salary + (hour - 60) * salary * 1.33;
        printf("%.1f", tot);
    }
    else{
        tot = 60 * salary + 60 * salary * 1.33 + (hour - 120) * salary *1.66;
        printf("%.1f", tot);
    }
    return 0;
}
