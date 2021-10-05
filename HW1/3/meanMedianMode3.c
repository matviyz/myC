#include <stdio.h>

int main(void){
	int in[5] = {0,0,0,0,0}; //an array length of 5 representing the input values
	int i,j,k = (0,0,0); //various variables for iteration
	float mean; //output variables
	float fin[5];
	int out[5] = {0,0,0,0,0}; //sorted array
	int mode[5] = {0,0,0,0,0}; //mode counter array	
	int finalMode = 0; //actual mode value


	printf("input 5 integers and type done, hitting enter after each input\n");
	for(i = 0;i < 5;++i)//a loop that takes 5 inputs
		scanf("%d\n",&in[i]);

	//mean calculations
	for(i = 0;i < 5;i++)
		fin[i] = in[i];	
	mean = (fin[0] + fin[1] + fin[2] + fin[3] + fin[4]) / 5.00; //the mean value


	//mode calculations
	for(i = 0;i < 4;i++){ //goes through each digit of the array
		if(in[i] == in[i+1]) //and checks if the values are ever equal
			++mode[i]; //if yes then the mode array of the digit increases
		if(i < 3){
			if(in[i] == in[i+2]){
				++mode[i];	
			}
		}
		if(i < 2){
			if(in[i] == in[i+3]){
				++mode[i];
			}
		}
		if(i < 1){
			if(in[i] == in[i+4]){
				++mode[i];
		}

		}
	}
	for(i = 0;i < 5;i++){
		if(mode[i] > 0){
			finalMode = in[i];
		}
	}


	//median calculations
	for(i = 0;i < 5;i++) //each input is assigned to the sorted array
		out[i] = in[i];
	for(i = 0;i < 5;i++){ //array sorter
		for(j = i + 1;j < 5;j++){
			if(out[i] > out[j]){
				k  = out[i];
				out[i] = out[j];
				out[j] = k;
			}
		}	
	}

	if(finalMode != 0)
		printf("The mean is %.2f\nThe mode is %d\nThe median is %d\n", mean, finalMode, out[2]);
	if(finalMode == 0)
		printf("The mean is %.2f\nThere is no mode\nThe median is %d\n", mean, out[2]);
		

	return (0);
}
