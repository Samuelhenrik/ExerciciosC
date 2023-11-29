#include <stdio.h>

int main()
{
    int n = 82;
    int r = 0;
    printf("bem vindo ao nosso jogo de adivinhação\n");
    while (r != n)
    {
        printf("\n\nDigite um numero entre 1 e 100: ");
        scanf("%d", &r);
        
        if (r > n)
        {
            printf("o numero que eu pensei é menor\n");
        }
        else if (r < n)
        {
            printf("o numero que eu pensei é maior\n");
        }
        else
        {
            printf("Voce acertou o numero que eu pensei foi %d\n", n);
            break;
        }
    }
    
    return 0;
}