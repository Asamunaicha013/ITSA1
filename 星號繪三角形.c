#include <stdio.h>

int main() {
    int mode;
    scanf("%d", &mode);

    if (mode == 1) {
        printf("    *\n");
        printf("   * *\n");
        printf("  *   *\n");
        printf(" *     *\n");
        printf("*********\n");
    } else if (mode == 2) {
        printf("    *\n");
        printf("   ***\n");
        printf("  *****\n");
        printf(" *******\n");
        printf("*********\n");
    } else if (mode == 3) {
        printf("*********\n");
        printf(" *******\n");
        printf("  *****\n");
        printf("   ***\n");
        printf("    *\n");
    }

    return 0;
}
