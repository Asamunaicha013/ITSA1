#include <stdio.h>

int main(){
    int number, start, end, sum;
    scanf("%d", &number);
    for(int i = 0; i < number; i++){
        scanf("%d %d", &start, &end);
        if(start > end){
            sum = (start + end) * (start - end + 1) / 2;
        }
        else{
            sum = (start + end) * (end - start + 1) / 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
