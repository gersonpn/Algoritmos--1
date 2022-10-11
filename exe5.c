#include <stdio.h>

int main()
{
 int n,x;
 int maior, menor;
 printf("tamanho: ");
 scanf("%d", &n);
 //ler uma sequencia de n numeros
 int i=1;
 while(i <= n)//roda n vezes
 {
  scanf("%d", &x);
  
  
  if(i==1)
  {
   menor = x;
   maior = x;

  }
  else
  {
    if(x > maior)
       maior=x;
    if(x < menor)  
       menor=x;
  }
 i++;
 
 
 }
 printf("maior: %d\n", maior);
 printf("menor: %d\n", menor);


 return 0;   
}