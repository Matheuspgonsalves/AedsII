#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TAM 50

bool isPalindromo(char text[]){
    char c;
    int len = strlen(text);
    char reverseText[len];
    printf("%d\n", len);
    printf("%s", text);
    
    for(int i = 0, j = len-1; i < j; i++,j--){
        c = text[i];
        reverseText[i] = text[j];
        reverseText[j] = c; 
    }

    printf("%s", reverseText);
    printf("%s", text);

    if(strcmp(text, reverseText)){
        return true;
    } else {
        return false;
    }
}

int main(){
    //variaveis
    char text[TAM];
    bool isPal;

    //texto de saida + entrada do usuario
    do{
        printf("\nDigite a palavra ou texto: ");
        fgets(text, TAM, stdin);

        isPal = isPalindromo(text);
        
        if(isPal){
            printf("\nSIM");
        } else if(isPal && !strncmp(text, "FIM", 3)){
            printf("\nNÃO");
        }
        
    }while(strncmp(text, "FIM", 3));



    return 0;
}