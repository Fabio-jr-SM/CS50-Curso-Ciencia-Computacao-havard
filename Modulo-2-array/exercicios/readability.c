#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) {
   
   string text = get_string("Texto: ");
   int letras=0, palavras=1,frases=0;
   
   for(int i=0; i<strlen(text);i++){
       if(isalpha(text[i])){
            letras++;
       }
       
       if(text[i]==' '){
          palavras++;
       }
       
       if(text[i]=='!' || text[i]=='.'){
          frases++;
       }
   }
   printf("Letras: %i\nPalavras: %i\nFrases: %i\n",letras,palavras,frases);
   
   //int indice = 0.0588 * L - 0.296 * S - 15.8
}
