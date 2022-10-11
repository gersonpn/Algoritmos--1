#include <stdio.h>

int main ()

{


int n1 = 0, n2 = 0, r = 0;

printf("Escreva o valor do primeiro numero: \n");
scanf ("%d", &n1);

printf ("Escreva o valor do segundo numero: ");
scanf ("%d", &n2);

if (n1 > 0) 

{
    r = n1 * n2;
    printf(" Valor maior que 0: %d \n",r);
}


else {

printf(" O valor do primeiro numero e: %d \n", n1);

printf ("O valor do segundo numero e: %d \n", n2);

}

return 0;

}