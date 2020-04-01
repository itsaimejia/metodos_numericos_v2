#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float funcion(float x){
	return cos(x);
}

main(){
	float deltaX=0.1;
	float epsi=0.01;
	int nmi=100;
	
	float x=deltaX;
	int i=0;
	
	do{
		float y=funcion(x);
		if(y<=0){
			if(deltaX<=epsi){
				printf("It: %d Una aprox a la raiz es: %.6f",i,x);
				break;
			}else{
				x=x-deltaX;
				deltaX=deltaX/10;
			}
		}
		
		x=x+deltaX;
		i++;
	}while(i<nmi);
	
	if(i>nmi)
	printf("No converge en %d iteraciones",nmi);
}

