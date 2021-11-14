#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n1, n2, n3, n4, n5, n6;
    scanf("%d\n", &n1);
    scanf("%d", &n2);
    n3 = n1 * (n2 % 10);
    printf("%d\n", n3);
    n4 = n1 * ((n2 / 10) % 10);
    printf("%d\n", n4);
    n5 = n1 * (n2 / 100);
    printf("%d\n", n5);
    n6 = n3 + n4 * 10 + n5 * 100;
    printf("%d\n", n6);

    return 0;
}