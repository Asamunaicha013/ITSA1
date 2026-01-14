#include <stdio.h>

int main(){
    int hour, minute, hour2, minute2, sum;
    int total = 0;
    int temp = 0;
    scanf("%d %d", &hour, &minute);
    scanf("%d %d", &hour2, &minute2);
    if(minute > minute2){
        hour2 -= 1 ;
        minute2 += 60;
        sum = (hour2 - hour) * 60 + (minute2 - minute);
        while((sum - temp) >= 30 ){
            if(temp < 120){
                total += 30;
                temp += 30;
            }
            else if(temp >= 120 && temp < 240){
                total += 40;
                temp += 30;
            }
            else if(temp >= 240){
                total += 60;
                temp += 30;
            }
        }
    }

    else{
        sum = (hour2 - hour) * 60 + (minute2 - minute);
        while((sum - temp) >= 30 ){
            if(temp < 120){
                total += 30;
                temp += 30;
            }
            else if(temp >= 120 && temp < 240){
                total += 40;
                temp += 30;
            }
            else if(temp >= 240){
                total += 60;
                temp += 30;
            }
        }
    }
    printf("%d", total);
    return 0;

}
