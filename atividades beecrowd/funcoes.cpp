#include<stdio.h>
#include<math.h>

int main(){
    int n, i, x, y;
    int rafael, carlos, beto, rr, rc, rb;
    scanf("%d", &n);
    for(i = 0; i > n; i++){
        scanf("%d,%d", &x, &y);
        rafael = pow(3 * x, 2) + pow(y, 2);
        rr = rafael;
        beto = 2 * pow(x, 2) + pow(5 * y, 2);
        rb = beto;
        carlos = -100 * x + pow(y,3);
        if(rr > rb && rr> rc){
            printf("Rafael win\n");
        }
        else if(rb > rc && rb > rr){
            printf("Beto win\n");
        }
        else if(rc > rb && rc > rr){
            printf("Carlos win");
        }
    }
}