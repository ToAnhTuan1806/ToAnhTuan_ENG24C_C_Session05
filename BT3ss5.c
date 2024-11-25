#include <stdio.h>

int main() {
// B1: Khai bao bien n, sum, i
    int n, sum = 0; 
    int i = 1;

// B2: Nhap gia tri cho n
    printf("Nhap so nguyen duong bat ki: ");
    scanf("%d", &n);

// B3: Xu ly dieu kien
    while (i <= n) {
        sum = sum + i;
        printf("Lan lap thu %d, ket qua sum la: %d\n", i, sum);
        i++;
    }

// B4: In ket qua
    printf("Ket qua sum la: %d\n", sum);

// B5: Ket thuc chuong trinh
    return 0;
}

