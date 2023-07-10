#include <stdio.h>
struct cmplx {
    int real;
    int img;
};
int main() {
    struct cmplx a, b;
    scanf("%d%d", &a.real, &a.img);	
    scanf("%d%d", &b.real, &b.img);
    printf("%d+%di\n", a.real + b.real, a.img + b.img);
    printf("%d+%di", a.real - b.real, a.img - b.img);	
    return 0;
}
