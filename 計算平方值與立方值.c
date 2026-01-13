#include <stdio.h>
#include <math.h>

int main(){
    int a, number;
    scanf("%d", &number);
    for(int i= 0; i < number; i++){
        scanf("%d", &a);
        int soa = pow(a, 2);
        int coa = pow(a,3);
        printf("%d %d %d\n", a, soa, coa);
    }
    return 0;
}
