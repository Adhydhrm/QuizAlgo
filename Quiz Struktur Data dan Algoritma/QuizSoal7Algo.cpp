#include <stdio.h>

int main(){
	
	int inputsatu;
	int inputdua;
	
	printf("Masukan angka pertama: ");
	scanf("%d", &inputsatu);
	
	printf("Masukan angka kedua: ");
	scanf("%d", &inputdua);
	
	if(inputsatu < inputdua){
		printf("Bilangan yang lebih besar yaitu %d", inputdua);
	}else if(inputdua < inputsatu){
		printf("Bilangan yang lebih besar yaitu %d", inputsatu);
	}
	
}
