#include <stdio.h>

int main(){
	int n;
	printf("Moi ban nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		int a;
		do{
			printf("moi ban nhap phan tu le: ");
			scanf("%d",&a);
		if(a%2==0){
			printf("moi ban nhap lai phan tu le:\n ");
			}
		}while(a%2==0);
		arr[i]=a;
		
	}
	for(int i=0;i<n;i++){
		printf("arr[%d]=%d\n",i, arr[i]);
	}
	
	
	return 0;
}
