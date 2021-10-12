#include <stdio.h>

int main(void) {
    int l,w = 0; //input variables for length and width
   
    printf("Please input the length of your rectangle: ");
    scanf("%d", &l); //scans for integer and assigns to l

    printf("Please input the width of your rectangle: ");
    scanf("%d", &w); 

    int p; //variable for perimeter
    p = (2 * l) + (2 * w); //perimeter formula is p=2l+2w

    printf("The perimeter of your rectangle is %d.\n", p);

    return 0;
}
