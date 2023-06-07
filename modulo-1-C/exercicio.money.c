#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)

{
    float reais;
    do
    {
        reais  = get_float ("valor do troco em reais: ");
    }
    while (reais <= 0);

    int centavos = round (reais*100);
    int moedas = 0;

    while (centavos >= 25)
    {
        centavos = centavos - 25;
        moedas++;
    }
    while (centavos >= 10)
    {
        centavos = centavos - 10;
        moedas++;
    }
    while (centavos >= 25)
    {
        centavos = centavos - 5;
        moedas++;
    }
    while (centavos >= 5)
    {
        centavos = centavos - 25;
        moedas++;
    }
    while (centavos >= 1)
    {
        centavos = centavos - 1;
        moedas++;
    }
    printf("vamos precisar de no mínimo %i moedas\n", moedas);

    if (moedas <= 1)

    printf("vamos precisar de no mínimo %i moeda\n", moedas);

}
