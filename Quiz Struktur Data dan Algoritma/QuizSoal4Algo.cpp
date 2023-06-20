#include <stdio.h>

//Cara 1
int main(){
	
	int nilai;
	
	printf("Masukan angka: ");
	scanf("%d", &nilai);
	
	for(int i = 1; i <= nilai; i++){
			printf("%d ", i);	
	}
	
}

//Cara 2
int main (){
	
	int nilai;
	
	printf("Masukan angka: ");
	scanf("%d", &nilai);
	
	int i = 1;	
	do {
		printf("%d ", i);
		i++;
	}while(i <= nilai);
	
}
