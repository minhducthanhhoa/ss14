#include <stdio.h>
int main(){
	int a = 10;
	int *ptr = &a;
	
	//In ra gia tri cua bien a va con tro ptr su dung 2 cach 
	printf("Gia tri cua bien a: %d\n", a);
	printf("gia tri cua bien a: %p\n", &a);
	
	printf("gia tri cua bien a qua con tro ptr: %d\n", *ptr);
	printf("Gia tri cua bien a qua con tro ptr: %p\n", ptr);
	
	return 0; 
} 
