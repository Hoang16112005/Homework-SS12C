#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int a, b, sum;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    sum = tinhTong(a, b);
    printf("Tong cua %d va %d la: %d\n", a, b, sum);

    return 0;
}
