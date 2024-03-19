#include <stdio.h>



int main(){
	
	float Eecon, Porig, Pred, tempo;
	printf("Calcularemos a quantidade de energia economizada pelo sistema. \n");
	printf("Digite a quantidade de energia gasta antes da implementacao do sistema. \n");
	scanf("%f", &Porig);
	
	printf("Agora digite a quantidade de energia gasrta depois da implementacao do sistema. \n");
	scanf("%f", &Pred);
	
	printf("Digite o tempo de duracao do periodo de economia. \n");
	scanf("%f", &tempo);
	
	Eecon=(Porig-Pred)*tempo;
	
	printf("Voce economizou %f kWh de energia eletrica em %f horas. \n", Eecon, tempo);
	
	return 0;
}
