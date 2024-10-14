#include<stdio.h>
#include<math.h> 

int main(){
    
float valoraserpago;
float quantidadedefolhas;

printf("Qual a quantidade de folhas?");
scanf("%f", &quantidadedefolhas);

if (quantidadedefolhas > 100){
 valoraserpago = quantidadedefolhas * 1/4;
}  

else valoraserpago = quantidadedefolhas * 1/5;

printf("%f", valoraserpago);

 }