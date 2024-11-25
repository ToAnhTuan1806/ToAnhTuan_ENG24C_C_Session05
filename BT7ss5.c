#include <stdio.h>

int main() {
// B1 khai bao bien a, b, commonDivisor
    int a, b, commonDivisor;
// B2 Nhap du lieu, xu ly dieu kien    
    do {
        printf("Nhap so nguyen duong thu nhat: ");
        scanf("%d", &a);
        if (a <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
    } while (a <= 0);

   
    do {
        printf("Nhap so nguyen duong thu hai: ");
        scanf("%d", &b);
        if (b <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
    } while (b <= 0);
// B2.1 Xu ly tinh toan
    while (b != 0) {
        commonDivisor = a % b;  
        a = b;        
        b = commonDivisor;      
    }
// B3 In ra man hinh
    printf("Uoc chung lon nhat cua hai so la: %d\n", a);
// B4 Ket thuc
    return 0;
}

