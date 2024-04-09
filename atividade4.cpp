#include <iostream>
    int main() {
       int num1, num2 , num3;
        
        printf("Digite um numero: ");
        scanf("%d", &num1 );
        ///
       printf("Digite um numero: ");
        scanf("%d", &num2 );
        ///
         printf("Digite um numero: ");
        scanf("%d", &num3 );

        if (num1 + num2 <= num3 || num1 + num3 == num2 || num2 + num3 <= num1) {
            
            printf("Os numeros não formam um triangulo! ");

        } if (num1 == num2 && num2 == num3) {

            printf("O triangulo é equilatero!\n " );

        } else if (num1 == num2 || num1 == num3 || num2 == num3){
            printf("O numero é isosceles!\n ");

        } else {
        printf("O numero é escaleno!\n ");
        }
          return false;

        }