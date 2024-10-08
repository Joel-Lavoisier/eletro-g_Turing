#include <stdio.h>
int main() {
float peso;
float altura;
float imc;

   printf("coloque seu peso aqui:");
   scanf("%f", &peso);
   printf("agora, coloque sua altura:");
   scanf("%f", &altura);
  imc= peso / (altura * altura);
  printf("%f é seu IMC %f sua altura %f seu peso", imc, altura, peso);
}
