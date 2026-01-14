#include <stdio.h>

int isprime(int i){
    if(i <= 1) return 0;
    else if(i <= 3) return 1;
    else if(i % 2 == 0 || i % 3 == 0) return 0;
    for(int j = 5; j <= i / j; j+=6){
        if(i % j == 0 || i % (j + 2) == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int number;
    scanf("%d", &number);
    for(int i = number - 1; i >= 2; i--){
        if(isprime(i)){
            printf("%d", i);
            break;
        }
    }
    return 0;
}
