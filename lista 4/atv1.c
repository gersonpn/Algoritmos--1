#include <stdio.h>

int main()
{


int num1, num2, r = 0;

printf("Digite os numeros:\n");

scanf("%d %d", &num1, &num2);

for (int i = num1+1 ; i < num2; i++)

{


r = r + i;


}


printf(" O resultado e: %d", r);



}