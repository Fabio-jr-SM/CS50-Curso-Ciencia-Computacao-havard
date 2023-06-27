#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    // Obtém uma string de entrada do usuário
    string s = get_string("input: ");

    // Imprime a mensagem "Output: "
    printf("Output: ");

    // Loop para percorrer cada caractere da string
    for (int i = 0; i < strlen(s); i++) {

        // Imprime cada caractere da string
        printf("%c", s[i]);
    }


    // Imprime uma nova linha
    printf("\n");

    return 0;
}
