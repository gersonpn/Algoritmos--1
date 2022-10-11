#include <stdio.h>



int main (){

int n1 = 0, n2 = 0; 

printf ("Digite o primeiro numero: ");


scanf ("%d", &n1);


for (int i = 0; i <= n1; i++){
if ( i % 3 == 0 && i!=0){

        printf("Seu numero:  %d \n", i);
        n2=n2+i;
        printf("%d\n",n2);
}


}

return 0;

}
