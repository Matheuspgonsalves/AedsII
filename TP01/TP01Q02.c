#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TAM 500

bool isPalindromo(char text[]){//metodo para verificar se eh palindromo
    
    int len = strlen(text);
    printf("%d", len);
    for(int i = 0, j = len-1; i < len/2; i++,j--){
        if(text[i] == text[j]){
            return true;
        } else {
            return false;
        }
    }

}

int main(){
    //variaveis e inicializacao
    char text[TAM] = "";
    bool isPal;

    
    do{//executar a entrada do usuario e chamar o metodo para verificar se eh palindromo
        printf("\nDigite a palavra ou texto: ");
        scanf(" %[^\n]", text);

        isPal = isPalindromo(text);
        
        if(isPal){
            printf("\nSIM");
        } else {
            printf("\nNÃO");
        }
        
    }while(strncmp(text, "FIM", 3));



    return 0;
}