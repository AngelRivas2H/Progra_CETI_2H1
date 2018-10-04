#include<stdio.h>

int main (){
  printf("================================ REDONDEADOR DE NUMEROS =================================\n");
  printf("=================================== By: Angel Rivas ====================================\n");
  int i_millar, i_centena, i_decenas, i_unidad, i_cifra;

  printf("Introduce las unidades de millar: ");
  scanf("%d", &i_millar);
  printf("Introduce las centenas: ");
  scanf("%d", &i_centena);
  printf("Introduce las decenas: ");
  scanf("%d", &i_decenas);
  printf("Introduce las unidades: ");
  scanf("%d", &i_unidad);

  i_cifra = (i_millar*1000)+(i_centena*100)+(i_decenas*10)+(i_unidad);

  printf("Cifra original: %d\n", i_cifra );

  if (i_decenas > 5) {
    i_centena += 1;
    i_decenas = 0;
    i_unidad = 0;
  }else if (i_decenas < 5) {
    i_decenas = 0;
    i_unidad = 0;
  }/*Creo que tambien se tienen que redondear los millares en ciertas ocasiones, pero la instrucción dice muy claro
  que redondeemos las sentenas*/
  i_cifra = (i_millar*1000)+(i_centena*100)+(i_decenas*10)+(i_unidad);
  printf("Cifra redondeada: %d\n", i_cifra );

  return 0;
}
