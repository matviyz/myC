#include <stdio.h>

int main(void) {
    float in = 0;
    int q,d,n,p = 0;    
    int i;

    scanf("%f", &in);
    printf("%.2f\n", in);

       for(q = 0;in > 0.25;++q){
            in = in - 0.25;
        }
       for(d = 0;in > 0.10;++d){
            in = in - 0.10;
        }
       for(n = 0;in > 0.05;++n){
            in = in - 0.05;
        }
       while(!(in > 0)){
            in = in - 0.01;
            ++p;
        }

    printf("%d quarters, %d dimes, %d nickles, %d pennies\n", q,d,n,p);
    printf("%.2f\n", in);

    return 0;
}
