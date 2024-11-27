#include <stdio.h>

int main(){
	int num[5]={2,5,4,7,9};
	int count=0;
	for(int i=0;i<5;i++){
		if(num[i]%2==0){
			printf("%d la so chan\n", num[i]);
			count++;
		}
	}
	if(count==0){
		printf("Khong co  so chan");
	}
		
	
	
	return 0;
}
