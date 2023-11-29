#include<stdio.h>
int Fatorial(int n){
    int fat = 1; int i;
    for(i=1; i<= n; i++)
        fat = fat * i;
    return fat;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",Fatorial(n));
}