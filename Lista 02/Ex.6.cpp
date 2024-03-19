#include <stdio.h>
#include <math.h>



int main (){
	
	float ang;
	
	printf("||CLASSIFICADOR DE ANGULOS||");
	printf("Digite um valor de angulo");
	scanf("%f", &ang);
	
	if (ang==360||ang==0){
		
		printf("Angulo completo ou na origem. \n");
		
	}else{
		
		if(ang==180){
			
			printf("Angulo raso. \n");
			
		}else{
			
			if(180>ang, 90<ang){
				
				printf("Angulo obtuso. \n");
				
			}else{
				
				if(ang==90){
					
					printf("Angulo reto. \n");
					
				}else{
					
					if(90>ang){
						
						printf("Angulo agudo. \n");
						
					}
					
				}
				
			}
			
		}
	}

//OBS: O exerc?cio n?o est? matematicamente completo, mas... :(

	return 0;
}
