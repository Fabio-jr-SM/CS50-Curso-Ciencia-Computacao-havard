# Exercicio 1: Mario
```C
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int altura, row, coluna, space;

    do{
        altura = get_int ( "Insira valor da altura: ");
    }
    while (altura < 1 || altura > 8);

    for (row = 0; row < altura; row++){
        for (space = 0; space < altura - row - 1; space++){
            printf(" ");
        }

        for (coluna = 0; coluna <= row ; coluna ++){
            printf("#");
        }

        printf("\n");

    }
}
```


# Exercicio 2: 
```C
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
```

# Exercicio 3:
 ```C
#include <stdio.h>
#include <cs50.h>

// Função para obter o comprimento do número do cartão
int get_card_length(long card_number)
{
    int length = 0;
    while (card_number != 0)
    {
        card_number /= 10;
        length++;
    }
    return length;
}

// Função para verificar se o número do cartão é válido para a American Express
bool is_valid_amex(long card_number)
{
    int length = get_card_length(card_number);
    if (length != 15)
    {
        return false;
    }
    
    int sum = 0;
    bool multiply = false;
    
    while (card_number > 0)
    {
        if (multiply)
        {
            int digit = (card_number % 10) * 2;
            sum += digit % 10 + digit / 10;
        }
        else
        {
            sum += card_number % 10;
        }
        
        card_number /= 10;
        multiply = !multiply;
    }
    
    return sum % 10 == 0;
}

// Função para verificar se o número do cartão é válido para a MasterCard
bool is_valid_mastercard(long card_number)
{
    int length = get_card_length(card_number);
    if (length != 16)
    {
        return false;
    }
    
    int sum = 0;
    bool multiply = false;
    
    while (card_number > 0)
    {
        if (multiply)
        {
            int digit = (card_number % 10) * 2;
            sum += digit % 10 + digit / 10;
        }
        else
        {
            sum += card_number % 10;
        }
        
        card_number /= 10;
        multiply = !multiply;
    }
    
    return sum % 10 == 0;
}

// Função para verificar se o número do cartão é válido para a Visa
bool is_valid_visa(long card_number)
{
    int length = get_card_length(card_number);
    if (length != 13 && length != 16)
    {
        return false;
    }
    
    int sum = 0;
    bool multiply = false;
    
    while (card_number > 0)
    {
        if (multiply)
        {
            int digit = (card_number % 10) * 2;
            sum += digit % 10 + digit / 10;
        }
        else
        {
            sum += card_number % 10;
        }
        
        card_number /= 10;
        multiply = !multiply;
    }
    
    return sum % 10 == 0;
}

int main(void)
{
    // Obter o número do cartão de crédito do usuário
    long card_number = get_long("Número do cartão de crédito: ");
    
    // Verificar se é um número válido da American Express
    if (is_valid_amex(card_number))
    {
        printf("AMEX\n");
    }
    // Verificar se é um número válido da MasterCard
    else if (is_valid_mastercard(card_number))
    {
        printf("MASTERCARD\n");
    }
    // Verificar se é um número válido da Visa
    else if (is_valid_visa(card_number))
    {
        printf("VISA\n");
    }
    // Se não for um número válido para nenhum dos cartões
    else
    {
        printf("INVALID\n");
    }
    
    return 0;
}
```
