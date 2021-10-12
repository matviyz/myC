#include <stdio.h>

int main(void) {
    int in,min,hr = 0; //input variable, and a variable for minutes and hours

    printf("Please input minutes as an integer: ");
    scanf("%d", &in); //grabs minute input
    min = in; //min is set to input

    for(hr = 0;min >= 60;++hr){ //loops until minutes value is less than 60
           min = (min - 60);    //subtracts 60 minutes 
        }                       //iterates hours
    
    printf("%d minutes = %d hour(s) %d minutes.", in,hr,min);
    //prints out input and ouput in minutes and hours

    return 0;
}
