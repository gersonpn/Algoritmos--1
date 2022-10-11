#include <stdio.h>

int
main()
    {
    int n;
    printf("Quantos voce deseja escrever\n");
    scanf("%d", &n);

    int v[n];
    float media = 0;
    for(int i = 0; i < n; i++)
        {
        printf("Digite um numero\n");
        scanf("%d", &v[i]);
        media = media + v[i];
        }
    for(int i = 0; i < n; i++)
        {
        printf("%d ", v[i]);
        }
    printf("\n A media: %0.1f\n", media/n);
    return 0;
    }