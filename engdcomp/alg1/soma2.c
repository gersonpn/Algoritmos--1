#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, resultado = 0;


    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        puts("Entradas invalidas: O primeiro numero deve ser maior que o segundo.");
        return 1;
    }
    
    for(int i = num1+1; i < num2; i++)

    {
        resultado = resultado + i;
    }

    printf("Resultado: %d\n", resultado);
}
