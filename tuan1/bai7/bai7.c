
#include<stdio.h>
int thebiggestgeneralconvention(int a, int b) {
    if (b == 0) return a;
    return thebiggestgeneralconvention(b, a % b);
}
int thesmallestgeneralmultiple(int a, int b) {
    return (a * b) / thebiggestgeneralconvention(a, b);
}
int main() {
    int a, b;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
    printf("the biggest general convention of %d and %d is: %d \n", a, b, thebiggestgeneralconvention(a, b));
    printf("the smallest general multiple of %d and %d is: %d \n", a, b, thesmallestgeneralmultiple(a, b));
}

