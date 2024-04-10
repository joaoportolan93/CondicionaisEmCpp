#include <iostream>
   int main(){
   
   float num1, num2;
   int operacao;
   
   printf("Digite um numero: ");
   scanf("%f", &num1);
///
    printf("Digite um numero: ");
    scanf("%f", &num2);
///
    printf("Escolha a operação 1 + ,2 - ,3 * ,4 / ");
    scanf("%d", &operacao);
switch (operacao)
{
case 1:
    printf("Resultado: %.2lf\n ",num1 + num2);
     break;
case 2: 
    printf("Resultado: %.2lf\n ",num1 - num2);
    break;
case 3: 
    printf("Resultado: %.2lf\n ",num1 * num2);
    break;
case 4: 
    printf("Resultado: %.2lf\n ",num1 / num2);

   break;
default:
    printf("Numeros invalidos %.2lf\n ",num1, num2);
    break;
}
return 0;
}