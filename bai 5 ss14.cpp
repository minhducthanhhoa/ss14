#include <stdio.h>
void bubbleSort(int *arr, int n) {
	int i, j;
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
} 
int main(){
	int n, i, choice;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Nhap cac phan tu trong mang: ");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]); 
	} 
	printf("Chon kieu sap xep (1 - Tang dan, 2 - Giam dan): ");
	scanf("%d", &choice) ;
	
	//Con tro toi mang 
	int *ptr = arr;
	
	//Sap xep tang hoac giam 
	switch(choice) {
		case 1:
			bubbleSort(ptr, n);
			break;
		case 2:
			bubbleSort(ptr, n);
			//Dao nguoc mang
			for(i = 0; i < n/2; i++) {
            	int temp = arr[i];
                arr[i] = arr[n-i-1];
                arr[n-i-1] = temp;
            }
            break;
		default:
            printf("Lua chon không hop le.\n");
            return 0; 
	}
	printf("Mang sau khi sap xep: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
