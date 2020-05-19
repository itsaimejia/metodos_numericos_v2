#include <stdio.h>
#include <stdlib.h>
#include<math.h>
# define M_PI           3.14159265358979323846  /* pi */
main(){
	float delta=0,xm=0,ym=0;
	float x1=0.1;
	float x2=0.5;
	float epsi=0.01;
	int nmi=100;
	
	int i=1;
	printf("Biseccion\n");
	float y1= log(pow(x1,2)+1)- exp((x1/2))*cos(M_PI*x1);
	float y2=log(pow(x2,2)+1)- exp((x2/2))*cos(M_PI*x2);
	printf("Valores iniciales: \ny1=%f\ny2=%f\n",y1,y2);
	printf("\nProceso:\n");
	while(true){
		
		xm=(x1+x2)/2;
		ym=log(pow(xm,2)+1)- exp((xm/2))*cos(M_PI*xm);
		printf("it: %i \nxm= %f\nym=%f\n",i,xm,ym);
		if(y1*ym <=0){
			x2=xm;
			printf("y1*ym <=0? V \nx2=%f\n",xm);
		}else{
			x1=xm;
			y1=ym;
			printf("y1*ym <=0? F\nx1=%f\ny1=%f\n",xm,ym);
		}
		
		
		delta=fabs((x2-x1)/x2);
		printf("delta=%f\n",delta);
		
		if(delta<=epsi){
			printf("delta<=epsi? V\n");
			printf("it: %i - La aproximacion a la raiz es: %f\n",i,xm);
			break;
		}else{
			printf("delta<=epsi? F\n");
		}
		i++;
		printf("-----------------------\n");
	}
	
}
