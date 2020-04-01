#include <stdio.h>
#include <stdlib.h>
#include<math.h>

main(){
	float y=0,yp=0,delta=0;
	float x=0.6;
	float epsi=0.01;
	int nmi=10;
	
	int i=0;
	
	do{
		y= pow(x,2)-0.5+x;
		delta=fabs((y-x)/y);
		i++;
		if(delta<=epsi){
			printf("%d Una aprox a la raiz es: %f",i,y);
			break;
		}
		
		x=y;
	}while(i<=nmi);
	
	if(i>=nmi)
		printf("No converge");
}
