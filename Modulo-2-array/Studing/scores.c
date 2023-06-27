#include <stdio.h>
#include <cs50.h>


//tamanho do vetor
const int total = 3;

// 1. Protótipo da função average
float average(int length, int array[]);

int main(void) {
    int scoreVet[total];

    //Loop para armazenar valores no vetor
    for (int i = 0; i < total; i++) {
        scoreVet[i] = get_int("Digite score: ");
    }

    //Chama a funcao avage para calcular a média
    printf("Média dos pontos: %f\n", average(total, scoreVet));
}

float average(int length, int array[]) {
    int soma = 0;

    //calcula a soma dos valores do vetor
    for (int i = 0; i < length; i++) {
        soma += array[i];
    }

    // Retorna a média dos elementos do array (convertida para float)
    return (float)soma / length;
}


/**************************************************

1. o protótipo de uma função é uma declaração 
adiantada que informa ao compilador sobre a 
existência da função e sua assinatura (tipos 
de parâmetros e tipo de retorno), permitindo 
que o código seja compilado corretamente mesmo 
que a definição da função esteja posteriormente 
no código.

**************************************************/