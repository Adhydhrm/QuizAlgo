#include <stdio.h>

int main(){
	
	int nilai;
	
	printf("Masukan angka: ");
	scanf("%d", &nilai);
	
	if(nilai >= 1){
		printf("Bilangan Positif");
	}else if(nilai == 0){
		printf("Bilangan 0");
	}else if(nilai <= -1){
		printf("Bilangan Negatif");
	}
	
}
