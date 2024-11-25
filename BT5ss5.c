#include<stdio.h>

int main(){
	int n = 1, multiplicationTable;
	while (n <= 9) {
		int a = 1;
		while (a <= 10) {
			multiplicationTable = n*a;
			printf("%d x %d = %d\t ", n, a, multiplicationTable);
			a++;
		}
		
		printf("\n");
		n++;
		
	}
	
	return 0;
}
