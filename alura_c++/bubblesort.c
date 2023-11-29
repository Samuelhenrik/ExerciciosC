/*#include<stdio.h>
int main() {
   char c;
   int i;
   long l;
   long vl[10];
   float f;
   double d;

   printf("bytes de cada tipo:\n");
   printf("char %d\n", sizeof(c));
   printf("int %d\n", sizeof(i));
   printf("long %d\n", sizeof(l));
   printf("long[10] %d\n", sizeof(vl)); 
   printf("float %d\n", sizeof(f));
   printf("double %d\n", sizeof(d));*/

#include<stdio.h>
#include<stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main(){
   int tamanho;
   printf("o tamanho do vetor\n");
   scanf("%d", &tamanho);

   int vetor[tamanho];

   for(int i=0; i < tamanho; i++){
    printf("elemento %d: ",i+1);
    scanf("%d",&vetor[i]);
   }

   qsort(vetor, tamanho, sizeof(int), comparar);

   printf("valores armazenados no vetor");
   for(int i=0; i < tamanho; i++){
    printf(" %d",vetor[i]);
   }
   
   return 0;
}