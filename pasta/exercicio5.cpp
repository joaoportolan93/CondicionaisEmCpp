#include <iostream>

       int main(){
        
        int num = 0;

        printf("Digite um numero: ");
        scanf("%d", &num);

       if(num > 10){
 
        printf("O numero é maior que 10! \n" );
        
       } else if (num == 10 ) {

        printf("O número é igual a 10! \n" );

       } else {
              printf("O número é menor que 10!\n" );
        }

return false;

}