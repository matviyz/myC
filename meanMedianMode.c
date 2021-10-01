#include <stdio.h>
#include <stdlib.h>

int main(void){
	char ia[3],ib[3],ic[3],id[3],ie[3];
	int a,b,c,d,e;
	float mean,median,mode;

	while(e != 0){
	printf("Please input 5 integers and hit Enter after each one\n");
	scanf("%s\n",ia);
	a = atoi(ia);
	scanf("%s\n",ib);
	b = atoi(ib);
	scanf("%s\n",ic);
	c = atoi(ic);
	scanf("%s\n",id);
	d = atoi(id);
	scanf("%s\n",ie);
	e = atoi(ie);
//	printf("Type done and hit enter when finished");
	}
	char enter;

	//if((enter = getchar()) == '\n'){
		mean = (a + b + c + d + e) / 5;
		//median = 		
		//mode = 	
		printf("%.0f,%.0f,%.0f", mean,median,mode);	
//	}			
			
	/*a= getchar() - 48;
	b = getchar() - 48;
	c = getchar() - 48;
	d = getchar() - 48;
	e = getchar() - 48;
*/
	printf("%d,%d,%d,%d,%d\n",a,b,c,d,e);
}
