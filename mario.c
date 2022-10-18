#include <cs50.h> //BIBLIOTECA DO CURSO
#include <stdio.h>

int main(void)
{
    int i = 1; // IMPRIME TANTO AS # QUANTO OS ESPAÇOS ( ), COMEÇA SENDO 1
    int j; // QUEBRA DE LINHA
    int n; // VAI SER O VALOR QUE O USUARIO DEFINIR DA PIRÂMIDE
    
    // SOLICITA O NOME DO USUARIO, %s BUSCA UMA STRING (FRASE)
    string nome = get_string("Digite seu nome: ");
    printf("Olá %s! Seja bem vindo ao desafio: ''Mario Facil''.\n", nome);

    do
    {
        n = get_int("Altura: ");
    }
    while (n < 1 || n > 8);

    for (j = 1; j <= n; j++)
    {

        for (i = n - i; i >= 1; i--)


             printf(" ")


        for (i = 1; i <= j; i++)

             printf("*");

        printf(" ");

        for (i = 1; i <= j; i++)

             printf("*");

        printf("\n");
    }
}