#include <stdio.h>

int main(void) {
    float f = 0; //float input
    int i = 0; //integer input
    char c = 0; //character input

    printf("input a letter: "); 
    scanf("%c", &c); //inputs a character and assigns to char c

    printf("input a decimal number: ");
    scanf("%f", &f);  //inputs a float and assigns to float f

    printf("input an integer: ");
    scanf("%d", &i); //inputs an integer and assigns to int i

    printf("your letter is %d.\n", c); //prints letter using integer conversion
    printf("your decimal number is %d.\n", f); //prints float using int conversion
    printf("your integer is %f.\n", i); //prints integer using float conversion

    return 0;
}
