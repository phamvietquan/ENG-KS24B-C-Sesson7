#include <stdio.h>

int main(){
	int arr[5]={2,4,6,3,9};
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("phan tu lon nhat la: %d\n", max);
	printf("phan tu nho nhat la: %d", min);
	
	return 0;
}
