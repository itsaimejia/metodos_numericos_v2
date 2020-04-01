#include <stdio.h>
#include <stdlib.h>
#include<math.h>

main(){
	float y=0,yp=0,delta=0;
	float x=1;
	float epsi=0.001;
	int nmi=100;
	
	int i=0;
	
	do{
		y= x-4*sin(x);
		yp= 1-4*cos(x);
		y=x-(y/yp);
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
