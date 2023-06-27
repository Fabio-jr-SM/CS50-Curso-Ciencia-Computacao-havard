# Exercicio 1: Readability

```C
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) 
{
    char text[1000];
    printf("Texto: ");
    fgets(text, sizeof(text), stdin);

    int letras = 0, palavras = 1, frases = 0;

    for (int i = 0; i < strlen(text); i++) 
    {
        if (isalpha(text[i])) 
        {
            letras++;
        }

        if (text[i] == ' ') {
            palavras++;
        }

        if (text[i] == '!' || text[i] == '.') {
            frases++;
        }
    }
    printf("Letras: %i\nPalavras: %i\nFrases: %i\n", letras, palavras, frases);

    float L = (float) letras / palavras * 100;
    float S = (float) frases / palavras * 100;

    float indice = 0.0588 * L - 0.296 * S - 15.8;
    int grade = (int) round(indice);

    printf("Grade: %i\n", grade);

    return 0;
}
```
