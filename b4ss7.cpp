#include <stdio.h>

int main(){
	int n;
	printf("Moi ban nhap vao so phan tu cua mang:");
	scanf("%d", &n );
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("phan tu thu %d la:",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("arr[%d]=%d\n", i,arr[i]);
	}
	return 0;
}
