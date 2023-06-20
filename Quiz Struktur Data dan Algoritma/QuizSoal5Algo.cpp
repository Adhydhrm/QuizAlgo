#include <stdio.h>

int main(){
	
	int nilai;
	
	printf("Masukan tinggi: ");
	scanf("%d", &nilai);
	
	for(int i = 1; i <= nilai; i++){
		//print spasi
		for(int j = 1; j <= i; j++){
			printf("%d", i);
		}
		
		//print bintang
		for(int k = nilai; k > i; k--){
			printf(" ");
		}
		
		printf("\n");
	}
	
}
