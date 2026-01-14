#include <stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u'||ch == 'A' 
        || ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U'){
        printf("母音");
    }
    else{
        printf("子音");
    }
    return 0;
}
