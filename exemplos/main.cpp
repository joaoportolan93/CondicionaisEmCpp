#include <iostream> 
      int main(){
        int idade;
        printf("Digite um numero: ");
        scanf("%d", &idade);

        if (idade >= 18) {
            printf("Você é maior de idade.\n");
          
        } else {
      printf("Você é menor de idade.\n");
        }
    return 0; 
    
      }