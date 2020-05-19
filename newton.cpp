#include <stdio.h>
#include <stdlib.h>
#include<math.h>

# define M_PI           3.14159265358979323846  /* pi */

main(){
	float y=0,yp=0,delta=0,y2=0;
	float x=M_PI/4;
	float epsi=0.000001;
	int nmi=100;
	
	int i=1;
	
	do{
		y= cos(x);
		yp= -sin(x)-1;
		y2=x-(y/yp);
		delta=fabs((y2-x)/y2);
		printf("it: %d \ny= %f \ny'= %f \n y= %f\ndelta= %f\n",i,y,yp,y2,delta);
		if(delta<=epsi){
			printf("%d Una aprox a la raiz es: %f",i,y2);
			break;
		}
		i++;
		
		x=y2;
		printf("x= %f\n",x);
	}while(i<=nmi);
	
	if(i>=nmi)
		printf("No converge");
}
