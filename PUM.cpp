#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i = 1; i >= n * 4; i++) {
        if (n % 4 == 0){
            printf("PUM\n");
        } else{
            printf("%d", n);
        }
    }
    return 0;
}