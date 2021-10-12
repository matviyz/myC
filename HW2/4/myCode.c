#include <stdio.h>

int main(void) {
    float in = 0; //input float
    int q,d,n,p = 0; //variables for each coin type 

    //doesn't work because float arithmetic is weird in C
    /*
    while (in >= -100){ //temporary infinite loop to test various values
        scanf("%f", &in); //input a float and place in 'in'
        printf("%.2f\n", in); //temporary test print the value

        for(q = 0;in >= 0.25;++q){ //for loop checks if the vaue is geq coin value
            in = in - 0.25;        //subtracts the value of the coin
        }                          //then increments the respective coin
        for(d = 0;in >= 0.10;++d){
            in = in - 0.10;
        }
        for(n = 0;in >= 0.05;++n){
            in = in - 0.05;
        }
        in = in * 100;
        for(p = 0;in >= 1;++p){
            in = in - 1;
        }

        printf("%d quarters, %d dimes, %d nickles, %d pennies\n", q,d,n,p);
        //prints the final values of the coins
        printf("%.2f\n", in); //temporary prints float value to check its 0
    }*/

    while (in >= -100){ //temporary infinite loop to test various values
        scanf("%f", &in); //input a float and place in 'in'
        printf("%.2f\n", in); //temporary test print the value

        in = in * 100; //converts to an int by multiplying by 100
        for(q = 0;in >= 25;++q){ //for loop checks if the vaue is geq coin value
            in = in - 25;        //subtracts the value of the coin
        }                        //then increments the respective coin
        for(d = 0;in >= 10;++d){
            in = in - 10;
        }
        for(n = 0;in >= 5;++n){
            in = in - 5;
        }
        for(p = 0;in >= 1;++p){
            in = in - 1;
        }

        printf("%d quarters, %d dimes, %d nickles, %d pennies\n", q,d,n,p);
        //prints the final values of the coins
        printf("%.2f\n", in); //temporary prints float value to check its 0
    }

    return 0;
}
