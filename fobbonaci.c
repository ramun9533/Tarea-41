#include <stdio.h>

int fib (int f){

   if ((f == 0) || (f == -1))
   return 1;
   else
   return fib(f-1) + fib(f-2);
}


   int main (void)

       {
           int p, valor;

          
           for (valor = 1; valor <= 20 ; valor++){

           p = fib(valor);
           printf("\n%d %d", valor, p);
           }


           return 0;
       }

