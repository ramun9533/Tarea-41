#include <stdio.h>
//http://[2a06:a003:2071::2%0]
//http://[2a06:a003:2071::2]
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

