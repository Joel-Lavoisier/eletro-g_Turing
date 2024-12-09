#include <stdio.h> 
int main(void) { 

 int Al;
 int c; 
 float Ntotal;
 float media; 
 float n;

 printf("Total de alunos?"); 
 scanf("%d",&Al);

 Ntotal = 0; 

 for(c=1; c<=Al; c++) { 
      printf("%d. Nota? ", c); 
      scanf("%f",&n); 
 Ntotal = Ntotal + n; 
 } 

 media = Ntotal/Al; 
          printf("Media = %.1f\n", media); 
 
}