#include <stdio.h>
#include<math.h> 
int main() {
    double x1, x2, y1, y2, distancia;
    scanf("%lf",&x1);
    scanf("%lf",&y1);
    scanf("%lf",&x2);
    scanf("%lf",&y2);
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%.4lf", distancia);
 
    return 0;
}