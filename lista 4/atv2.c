#include <stdio.h>

int main ()
{

int n1, n = 0;

 printf(" Escreva o numero:\n");

 scanf("%d", &n1);


for (int i = n1 ; i > 0; i--)


{

n = n + i;

}


printf("%d \n", n);


return 0;


}