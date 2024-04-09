#include <iostream>
   int main(){
   
   float num1, num2;
   int operacao;
   
   printf("Digite um numero: ");
   scanf("%f", &num1);
///
    printf("Digite um numero: ");
    scanf("%f", &num2);

    printf("DEscolha a operação 1 + ,2 - ,3 * ,4 / ");
    scanf("%d", operacao);
switch (operacao)
{
case 1:
    printf("Resultado da sua adição:\n ");
     break;
case 2: 
    printf("Resultado da sua subtração:\n ");
    break;
case 3: 
    printf("Resultado da sua multiplicação:\n ");
    break;
case 4: 
    printf("Resultado da sua divisão:\n ");
   break;
default:
    printf("Numeros invalidos\n ");
    break;
}
return 0;
}