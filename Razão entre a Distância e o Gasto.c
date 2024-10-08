#include <stdio.h>
int main() {

float distancia;
float combustivel;
float razao;

   printf("coloque aqui a distância percorrida:");
   scanf("%f", &distancia);

   printf("agora, coloque o consumo de combustível:");
   scanf("%f", &combustivel);

 razao = distancia / combustivel;

 printf("%f", razao);

}
