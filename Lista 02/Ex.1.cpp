#include <stdio.h>
#include <math.h>


int main ()	{
	float pot, Vrms, Irms, t;
	printf("||Calculador de Potencia ativa||");
	printf("Insira o valor da tensão eficaz. \n");
	scanf("%f", &Vrms);
	
	printf("Insira o valor da corrente eficaz. \n");
	scanf("%f", &Irms);
	
	printf("Insira o valor do angulo entre de fase entre corrente e tensao. \n");
	scanf("%f", &t);
	
	pot=Vrms*Irms*cos(t);
	
	printf("O valor de potencia ativa e %f Watts. \n", pot);
	
	return 0;
}
