#include <stdio.h>
#define SIZE 50

struct tipoPessoas
{
    char nome[SIZE];
    int idade;
    char cpf[14];
    char genero[SIZE];
};

int main() {

    int i, n;
    struct tipoPessoas pessoas[SIZE];
    
    printf("Enter the number of people: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name for person %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Qual és la edad de la persona %d:",i+1);
        scanf("%d", &pessoas[i].idade);
        printf("CPF de la persona %d:", i+1);
        scanf("%s", pessoas[i].cpf);
        printf("Género de la persona %d:",i+1 );
        scanf("%s", &pessoas[i].genero);
        printf("Su nombre és %s, tiene %d años, su CPF es %s y su género es %s\n",pessoas[i].nome, pessoas[i].idade, pessoas[i].cpf, pessoas[i].genero );
    };

    return 0;
}
