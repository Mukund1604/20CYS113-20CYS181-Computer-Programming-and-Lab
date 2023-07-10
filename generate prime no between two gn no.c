#include <stdio.h>
int isprime(int n) {
    int flag = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag += 1;
        }
 }
    if (flag == 1 || n == 2) {
        return 1;
    } else {
        return 0;
    }
}
void generateprime(int s, int e) {
    int check;
    if (s <= e) {
        printf("Prime numbers between %d and %d are:", s, e);
        for (int i = s; i <= e; i++) {
            check = isprime(i);
            if (check == 1) {
                printf(" %d", i);
            }
        }
    } else {
        printf("Prime numbers between %d and %d are:", e, s);
        for (int i = e; i <= s; i++) {
            check = isprime(i);
            if (check == 1) {
                printf(" %d", i);
            }
        }
    }
}
int main() {
    int start, end;
    scanf("%d %d", &start, &end);
    generateprime(start, end);
    return 0;
}
