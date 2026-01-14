#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a > 0){
        printf("正數");
    }
    else if(a == 0){
        printf("0");
    }
    else{
        printf("負數");
    }
    return 0;
}
