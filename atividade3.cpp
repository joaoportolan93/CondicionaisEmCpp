#include <iostream>
 int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num %3 == 0 && num %5 == 0){
        printf("Esse numero é multiplo de 3 e 5!\n");
    } else{
        printf("Esse numero não é multiplo de 3 e 5!\n");

    }
 return false;
 }
