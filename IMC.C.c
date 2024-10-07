#include<stdio.h>

int main(){
int peso;
int altura;
int IMC;

printf("informe seu peso:");
scanf("%d", &peso);
printf("Agora informe sua altura:");
scanf("%d", &altura);

IMC = peso / (altura * altura);

printf("Seu IMC é:");
scanf("%d", &IMC);

}
