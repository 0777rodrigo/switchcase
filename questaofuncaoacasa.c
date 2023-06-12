#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void maiorNumero(int numero1, int numero2)
{

    int maior;

    if (numero1 > numero2)
    {
        maior = numero1;
    }
    else
    {

        maior = numero2;
    }

    printf("maior numero %d \n ", maior);
}

int menorNumero(int numero1, int numero2)

{

    int menor;

    if (numero1 < numero2)
    {
        menor = numero1;
    }
    else
    {
        menor = numero2;
    }

    return menor;
}
