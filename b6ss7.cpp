#include <stdio.h>

int main(){
	int arr[5]={2,9,8,2,6};
	for(int i=0; i<5;i++){
		if(arr[i]%2==0){
			arr[i]+=3;
		}
		else{
			arr[i]+=2;
		}
	printf("arr[%d]=%d\n", i, arr[i]);	
	}
	
	return 0;
}
