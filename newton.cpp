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
		y= cos(x)-x;
		yp= -sin(x)-1;
		y2=x-(y/yp);
		delta=fabs((y2-x)/y2);
		printf("%i\n",i);
		printf("y=cos(%.10f)=%.10f\n",x,y);
		printf("yp= -sen(%.10f) -1= %.10f\n",x,yp);
		printf("y=(%.10f) - (%.10f / %.10f)= %.10f\n",x,y,yp,y2);
		printf("delta= abs((%.10f - %.10f) / %.10f)= %.10f\n",y2,x,y2,delta);
		if(delta<=epsi){
			printf("%.10f <= %.10f ? F\n",delta,epsi);
			printf("%d Una aprox a la raiz es: %.10f\n",i,y2);
			break;
		}else{
			printf("%.10f <= %.10f ? F\n",delta,epsi);
		}
		i++;
		
		x=y2;
		printf("x= %.10f\n",x);
	}while(i<=nmi);
	
	if(i>=nmi)
		printf("No converge");
}
