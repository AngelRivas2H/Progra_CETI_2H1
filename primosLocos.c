#include <stdio.h>

int main () {
   int i;
   for(i=1;i<=20;i++){
     if (i%2 == 0) {
       printf("El numero %d es par.\n", i);
     }
   }
   return 0;
}
