#include<stdio.h>
#include<math.h>

int main (){
  printf("================================ REDONDEADOR DE NUMEROS =================================\n");
  printf("=================================== By: Angel Rivas ====================================\n");
  float f_num;
  int i_type;
  printf("Por favor introduce una cifra con decimales para ser redondeada. \nCifra: ");
  scanf("%f",&f_num);
  printf("A cuantos decimales desea redondear: \n1) 0\n2) 1\n3) 2\nElija un inciso: ");
  scanf("%d", &i_type);
  switch (i_type) {
    case 1:
    printf("El numero redondeado seria: %.0f", f_num);
    break;
    case 2:
    printf("El numero redondeado seria: %.1f", f_num);
    break;
    case 3:
    printf("El numero redondeado seria: %.2f", f_num);
    break;
    default:
    printf("Elije una opcion valida");
    break;
  }
  return 0;
}
