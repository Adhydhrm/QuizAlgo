#include <stdio.h>

int main(){
	
	int arr[] = {30, 50, 70, 90};
	
	int nilai = 4, sum = 0;
	
	for(int i = 0; i < nilai; i++){
		sum+=arr[i];
	}
	 
	printf("%d", sum);
	return 0;
	
}
