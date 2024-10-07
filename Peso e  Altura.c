#include<stdio.h>
int main (){
int peso;
int altura;
int IMC;

printf("informe seu peso:");
scanf("%f", &peso);
printf("Agora informe sua altura:");
scanf("%f", &altura);

IMC = peso / (altura * altura);

printf("Seu IMC é:");
scanf("%f",IMC);

}
