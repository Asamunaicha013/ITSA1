#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int sum = 0;
    for(int i = 6; i < a; i+= 6){
        if(i % 12 == 0){
            continue;
        }
        else{
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;

}
