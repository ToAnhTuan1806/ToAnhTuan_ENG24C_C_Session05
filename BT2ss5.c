#include<stdio.h>

int main(){
// B1 Khai bao bien va gan gia tri cho n, khai bao bien User
	int n = 18; 
	int User;
	
// B2 Nhap du lieu cho bien User
	printf("Nhap vao mot so nguyen bat ki: ");
	scanf("%d", &User);

// B3 Xu ly dieu kien	
	while (User != n) { 
        printf("So duoc nhap khong trung voi so cho truoc\n");
        printf("Nhap lai mot so nguyen bat ki: ");
        scanf("%d", &User);
    }

    printf("So duoc nhap trung voi so cho truoc\n");
// B4 Ket thuc
	return 0;
}
