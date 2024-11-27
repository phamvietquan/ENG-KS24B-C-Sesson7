#include <stdio.h>

int main(){
	int arr[5];
	printf("Moi ban nhap vao cac phan tu trong mang ");
	for(int i=0; i<5; i++){
		printf("\nMoi ban nhap vao phan tu thu %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	printf("Mang da duoc nhap la:\n");
	for(int i=0; i<5; i++){
		printf("arr[%d]= %d\n", i , arr[i]);
	}
	
	return 0;
}
