#include <stdio.h>

int main(){
    int second;
    scanf("%d", &second);
    int day = second / 86400;
    printf("%d days\n", day);
    second -= day * 86400;
    int hour = second / 3600;
    printf("%d hours\n", hour);
    second -= hour * 3600;
    int minute = second / 60;
    printf("%d minutes\n", minute);
    second -= minute * 60;
    printf("%d seconds\n", second);
    return 0;
}
