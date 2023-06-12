#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[200] = "Maria";
    int idade = 20;
    int opcao;

    do
    {

        printf("1 mostrar nome \n ");
        printf("2 mostrar idade \n ");
        printf("0 sair do programa \n ");

        printf("informe a opcao");
        printf("%d ", &opcao);

        switch (opcao)
        {

        case 1:
            printf("nome %d \n ", nome);
            break;
        case 2:
            printf("idade %d \n ", idade);
            break;
        case 0:
            printf("sair do programa \n");
            break;
        }
    } while (opcao = 0);
}