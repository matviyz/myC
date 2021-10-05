#include <stdio.h>
#include <string.h>

int main(void){
	char a[50],b[50],c[50]; //input string arrays
	char sort[3]; //sorting array
	int i,j,k; //various variables for iteration


	//3 string inputs
	printf("Type the first word and hit enter\n");
	scanf("%s", a);
	printf("Type the second word and hit enter\n");
	scanf("%s", b);
	printf("Type the third word and hit enter\n");
	scanf("%s", c);

	//order provided by user
	printf("You typed %s,%s, and %s\n", a,b,c);		
	
	//plugging first letter into sorting array
	sort[0] = a[0];
	sort[1] = b[0];
	sort[2]	= c[0];
	
	//sorting algorithm
	for(i = 0; i < 3;i++){
		for(j = i + 1; j < 3;j++){
			if(sort[i] > sort[j]){
				k = sort[i];
				sort[i] = sort[j];
				sort[j] = k;
			}
		}
	}	
	
	//sorted output depending on the order
	if(sort[0] == a[0] && sort[1] == b[0])
		printf("Those words in alphabetical order are %s, %s, and %s\n", a,b,c);
	if(sort[0] == a[0] && sort[1] == c[0])
		printf("Those words in alphabetical order are %s, %s, and %s\n", a,c,b);
	if(sort[0] == b[0] && sort[1] == a[0])
		printf("Those words in alphabetical order are %s, %s, and %s\n", b,a,c);
	if(sort[0] == b[0] && sort[1] == c[0])
		printf("Those words in alphabetical order are %s, %s, and %s\n", b,c,a);
	if(sort[0] == c[0] && sort[1] == a[0])
		printf("Those words in alphabetical order are %s, %s, and %s\n", c,a,b);
	if(sort[0] == c[0] && sort[1] == b[0])
		printf("Those words in alphabetical order are %s, %s, and %s\n", c,b,a);
	
	return (0);
}
