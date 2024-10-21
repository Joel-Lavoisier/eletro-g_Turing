#include<stdio.h>

int main(){

int caixaop;

printf("indique o numero da operacao");
scanf("%d", &caixaop);

if(caixaop == "1"){
   printf("Saldo");
}
   
       if(caixaop == "2"){
       printf("Extrato");
       }

          if(caixaop == "3"){
          printf("Saque");
          }

             if(caixaop == "4"){
             printf("Sair");
             }

}
