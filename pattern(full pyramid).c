#include <stdio.h>
void main() {
    int r,l,m;
    scanf("%d", &r);
    if (r < 1 || r > 24) {
        printf("Invalid Input");
    } else {
        for (l= 0; l < r; l++) {
            for (m = 2*(r – i)-1; m > 0; m--) {
                printf(" ");
            }
            for (m= 0; m < 2 * l + 1; m++) {
                printf("* ");
            }
            printf("\n");
        }
    }
}
