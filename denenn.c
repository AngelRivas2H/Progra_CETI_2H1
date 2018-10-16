#include <stdio.h>

int main () {
   int i_i, i_num_inicio, i_num_fin, i_num_contador, i_eleccion;
   printf("Elije la cifra inicial\nCifra inicial: ");
   scanf("%d", &i_num_inicio);
   printf("Elije la cifra final\nCifra final: ");
   scanf("%d", &i_num_fin);
   printf("De cuanto en cuanto deseas que se cuente.\nDe cuanto en cuanto: ");
   scanf("%d", &i_num_contador);
   printf("Deseas que sea en cuenta regresiva o progresiva\n1) Progresiva\n2) Regresiva\n");
   scanf("%d", &i_eleccion);
   system("cls"); //Esto sirve para limpiar la pantalla.
   switch (i_eleccion) {
     case 1:
       for(i_i=i_num_inicio;i_i<=i_num_fin;i_i+=i_num_contador){
           printf("%d\n", i_i);
       }
     break;
     case 2:
       for(i_i=i_num_fin;i_i>=i_num_inicio;i_i-=i_num_contador){
           printf("%d\n", i_5
           59i);
       }
     break;
     default:
      printf("Opcion invalida\n");
   }
   return 0;
}
