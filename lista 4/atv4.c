#include <stdio.h>

int main()

{

int n = 0, r = 0;

printf (" Escreva o numero: ");

scanf ("%d", &n);


for ( int i = 0; i <= n; i++)

 {

 if ( i % 2 != 0 && i!=0) 
 
   {

       printf ("Seu numero:  %d \n", i);
   }



 }

return 0;

}
