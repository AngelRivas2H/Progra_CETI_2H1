/*
- No me hago responsable del mal uso de este documento
- o los daños que pueda causar por el mismo.
- Los quiero.
*/
#include<stdio.h>
#define F_PG .30

main (void) {
  float f_btr, f_htr, f_atr, f_pm2, f_ptr, f_gt, f_gi;
  printf("Captura las dimensiones del terreno (ancho y largo) en metros: \nAltura: ");
  scanf("%f", &f_htr);
  printf("Largo: ");
  scanf("%f", &f_btr);
  printf("Precio por metro cuadrado del terreno: ");
  scanf("%f", &f_pm2);
  f_atr = f_htr * f_btr;
  f_ptr = f_atr * f_pm2;
  f_gt = f_ptr * F_PG;
  f_gi = f_gt / 2;
  printf("El precio del terreno es: %f\n", f_ptr);
  printf("La ganancia para el vendedor es de %f pesos\n", f_gi);
  printf("La ganancia para la agencia es de %f pesos\n", f_gi);
}
