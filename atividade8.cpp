#include <iostream>
   int main(){

    float num1, num2;

    printf("Digite seu peso: ");
    scanf("%f", &num1);
     
    printf("Digite seu altura: ");
    scanf("%f", &num2);
   
   float calculo = num1 / (num2 * num2);

if (calculo <=18.5){
   printf("Categoria: abaixo do peso \n ");

} else if (calculo > 18.5 || calculo < 25){
    
    printf("Categoria: Peso normal \n ");

} else if (calculo > 25 || calculo < 30){

   printf("Categoria: Sobrepeso \n ");

}
return 0;

   }