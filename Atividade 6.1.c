#include <stdio.h> 
int main(void) { 

 int n , s, r, d; 

 printf("Numero? "); 
 scanf("%d", &n); 

 s = 0; 

 while( n > 0 ) { 
 r = n % 10; 
 n /= 10; // equivalente a n = n / 10 
 s += r; // equivalente a s = s + r 
 } 

 d = s % 10;

 printf("DV = %d\n", d); 
 
 return 0;
}