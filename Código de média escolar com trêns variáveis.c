#include<stdio.h>
#include<math.h> 

int main(){

int nota1;
int nota2;
int nota3;
int nota4;
int media;

media = nota1+nota2+nota3+nota4 / 4;

printf("Informe a nota 1:");
scanf("%d", &nota1);

printf("Informe a nota 2:");
scanf("%d", &nota2);

printf("Informe a nota 3:");
scanf("%d", &nota3);

printf("Informe a nota 4:");
scanf("%d", &nota4);

printf("%d",media);


if( media > 7){
    printf("O aluno está aprovado");
}

if(4 > media && media < 7){

    printf("O aluno está de exame final");
}

if(media < 4){
printf("O aluno definitivamente está reprovado");

}}
