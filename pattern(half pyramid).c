#include <stdio.h>
void main() {
    int r,l,m;
    scanf("%d", &r);
    if (r < 1 || r > 24) {
        printf("Invalid Input");
    } else {
        for (l = 0; l< r; l++) {
            for (m = 0; m<= l; m++) {
                printf("* ");
            }
            printf("\n");
        }
    }                                                                                                                                                }
