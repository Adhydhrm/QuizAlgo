#include <stdio.h>

int main(){
	
	int inputsatu;
	int inputdua;
	
	printf("Masukan panjang: ");
	scanf("%d", &inputsatu);
	
	printf("Masukan lebar: ");
	scanf("%d", &inputdua);
	
	int kali = inputsatu * inputdua;
	printf("Luas persegi panjang adalah: %d \n", kali);
	
}
