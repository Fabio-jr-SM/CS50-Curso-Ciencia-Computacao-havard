#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


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
   
   float L = (letras/palavras)*100;
   float S = (frases/palavras)*100;
   
   float indice = (0.0588*L) - (0.296*S) - 15.8;
   int grade = (int) round(indice);
   
   printf("Grade: %i\n",grade);
}


/***********************************************************

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
   
   int L = (letras/palavras)*100;
   int S = (frases/palavras)*100;
   
   int indice = 0.0588 * L - 0.296 * S - 15.8;
   
   printf("Grade: %i\n",indice);
}


*************************************************************

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

string verif_text(string text[]);

int main(void) {
   
   string text = get_string("Texto: ");
   
   verif_text(string text[]);
   
   printf("Letras: %i\nPalavras: %i\nFrases: %i\n",letras,palavras,frases);
   
   printf("Grade: %i\n",calculate_indice());
}


string verif_text(string text[]){
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
}

int calculate_indice(){
   int L = (letras/palavras)*100;
   int S = (frases/palavras)*100;
   
   int indice = 0.0588 * L - 0.296 * S - 15.8;
}*/
