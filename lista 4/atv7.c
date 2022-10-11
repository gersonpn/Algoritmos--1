#include <stdio.h>

int main ()

{


int n1 = 0, n2 = 1;


printf ("Digite o numero fatorial: \n");
scanf("%d", &n1);
printf("fatorial de %d!: \n",n1);
for (int i =1; i <= n1; i++)
{
    n2*=i;

}
printf("%d",n2);

}