#include <stdio.h>

int main() {
    // B1 Khai bao bien num1, num2, option
    int num1, num2, option;

    // B2 Nhap du lieu cho num1, num2
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num2);

    // B3 Xu ly dieu kien, tinh toan, in ra man hinh lua chon cua nguoi dung   
    int running = 1;
    while (running) {
        
        printf("\n CALCULATOR \n");
        printf("1. Cong hai so\n");
        printf("2. Tru hai so\n");
        printf("3. Nhan hai so\n");
        printf("4. Chia hai so\n");
        printf("5. Thoat\n");

        
        printf("Lua chon cua ban (1-5): ");
        scanf("%d", &option);

        if (option == 5) {
            printf("Thoat chuong trinh\n");
            running = 0; 
        } else {
            switch (option) {
                case 1:
                    printf("%d + %d = %d\n", num1, num2, num1 + num2);
                    break;
                case 2:
                    printf("%d - %d = %d\n", num1, num2, num1 - num2);
                    break;
                case 3:
                    printf("%d * %d = %d\n", num1, num2, num1 * num2);
                    break;
                case 4:
                    if (num2 != 0) {
                        printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                    } else {
                    	printf("Loi\n");
					}
                    break;
                default:
                    printf("Khong hop le. Vui long chon lai!\n");
            }
        }
    }

    // B4 Ket thuc chuong trinh
    return 0;
}

