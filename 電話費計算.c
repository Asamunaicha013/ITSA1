#include <stdio.h>

int main(){
    int cost;
    scanf("%d", &cost);
    if(cost < 800){
        printf("%.1f", cost * 0.9);
    }
    else if(cost >= 800 && cost < 1500){
        printf("%.1f", cost * 0.9 *0.9);
    }
    else{
        printf("%.1f", cost * 0.9 * 0.79);
    }
}
