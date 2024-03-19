#include <stdio.h>

//Determine se um fio ? fase ou neutro com base na tens?o medida.

int main (){
	
	float tensao;
	printf("Digite um valor de tensao e sera determinado se o fio e fase ou neutro. \n");
	scanf("%f", &tensao);
	
	if (tensao<=50){
		
		printf("Para %f Volts o fio e considerado neutro. \n", tensao);
		
	}else{
		
		printf("Para %f Volts o fio e considerado fase. \n", tensao);
		
	}
	
	
	return 0;
}
