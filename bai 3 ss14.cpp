#include <stdio.h>
#include <string.h>
int main(){
	char str1[100], str2[100];
	char *ptr1, *ptr2;
	
	printf("Nhap chuoi 1: ");
	gets(str1);
	printf("NHap chuoi 2: "); 
	gets(str2);
	// Gan dia chi bat dau cua chuoi cho con tro 
	ptr1 = str1;
	ptr1 = str1;
	// Tinh do dai cua 2 chuoi 
	int len1 = strlen(ptr1);
	int len2 = strlen(ptr2);
	printf("Do dai chuoi 1: %d\n", len1);
	printf("Do dai chuoi 2: %d\n", len2);
	//So sanh do dai cua 2 chuoi va in ra chuoi co do dai lon hon 
	if (len1 > len2) {
		printf("Chuoi 1 co do dai lon hon: %s\n", &str1); 
	} else if (len2 > len1) {
		printf("Chuoi 2 co do dai lon hon: %s\n", &str2); 
	} else {
		printf("Hai chuoi co do dai bang bang nhau. \n"); 
	} 
	return 0; 
} 
