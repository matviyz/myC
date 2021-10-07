#include <stdio.h>

int main(void) {
    int in,min = 0;
    int hr = 0;

    printf("Please input minutes as an integer: ");
    scanf("%d", &in);
    min = in;

    for(hr = 0;min >= 60;++hr){
           min = (min - 60);
        }
    
    printf("%d minutes = %d hour(s) %d minutes.", in,hr,min);

    return 0;
}
