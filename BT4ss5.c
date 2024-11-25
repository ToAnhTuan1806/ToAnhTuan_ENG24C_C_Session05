#include<stdio.h>

int main(){
// B1 Khai bao bien n, i, multiplicationTable
	int n, multiplicationTable;
	int i = 1;

// B2 Nhap gia tri cho bien n
	printf("Nhap mot so nguyen duong tu 1 den 10: ");
	scanf("%d", &n);
	
// B3 Xu ly dieu kien, tinh toan va in ra man hinh
	while (n<1 || n>10) {
		printf("So nhap vao so nhap vao khong chinh xac\n\n");
		printf("Nhap mot so nguyen duong tu 1 den 10: ");
		scanf("%d", &n);
	}	
	printf("Bang cuu chuong cua %d la:\n", n);
	
	while (i <= 10) {
		multiplicationTable = n*i;
		printf("%d x %d = %d\n", n, i, multiplicationTable);
		i++;
	}

// B4 Ket thuc chuong trinh
	return 0;
}
