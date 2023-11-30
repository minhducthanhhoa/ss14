#include <stdio.h>
int swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp; 
}
int main(){
	int num1, num2;
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &num1);
	
	printf("Nhap vao so thu hai: ");
	scanf("%d", &num2);
	
	printf("Hieu hai so truoc khi doi cho: %d\n", num1 - num2);
	
	swap(&num1, &num2);
	
	printf("Hieu hai so sau khi doi cho: %d\n", num1 - num2);
	
	return 0; 
} 
