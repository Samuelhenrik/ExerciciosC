#include <stdio.h>
#include <math.h>
int main() {
   double a, b, c, r1, r2;
   scanf("%lf %lf %lf", &a, &b, &c);
   
   double delta = pow(b, 2) - 4 * a * c;

   if(a == 0 || delta < 0){
      printf("Impossivel calcular\n");
   }else{
      r1 = (-b + sqrt(delta)) / (2 * a);
      
      r2 = (-b - sqrt(delta)) / (2 * a);
   }
   printf("R1 = %.5lf", r1);
   printf("\n");
   printf("R2 = %.5lf", r2);
   
   return 0;
   }