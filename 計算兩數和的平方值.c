#include <stdio.h>
#include <math.h>

int main(){
    int a, b, number;
    scanf("%d", &number);
    for(int i = 0; i< number; i++){
        scanf("%d %d", &a, &b);
        int sum = a+b;
        int sumof = pow(sum,2);
        printf("%d\n",  sumof);
    }
    return 0;
}
