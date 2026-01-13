#include <stdio.h>

int main(){
    int ticket;
    scanf("%d", &ticket);
    printf("NT10=%d\n", ticket / 10);
    ticket = ticket - 10 * (ticket / 10);
    printf("NT5=%d\n", ticket / 5);
    ticket = ticket - 5 * (ticket / 5);
    printf("NT1=%d\n", ticket);
    return 0;
}
