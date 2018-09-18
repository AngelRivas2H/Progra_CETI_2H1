#include<stdio.h>

void main(){
  int a = 8;
  int b = 3;
  int c = -5;

  printf("OPERACIONES LOCAS DE PROGRA: \nBy: Angel Rivas \n \n");
  printf("Grupo de ejercicios 1 \n \n");
  printf("a. %d \n", a+b+c);
  printf("b. %d \n", 2*b+3*(a-c));
  printf("c. %d \n", a/b);
  printf("d. %d \n", a%b);
  printf("e. %d \n", a/c);
  printf("f. %d \n", a%c);
  printf("g. %d \n", a*b/c);
  printf("h. %d \n", a*(b/c));
  printf("i. %d \n", (a*b)%b);
  printf("j. %d \n \n", a * ( c % b ));
  printf("Grupo de ejercicios 2 \n \n");
  float x = 88;
  float y = 3.5;
  float z = -5.2;
  printf("k. %g \n", x+y+z);
  printf("l. %g \n", 2 * y + 3*(x*z));
  printf("m. %g \n", x/y);
  // printf("n. %g \n", x % y); Mi compilador no lo asimila porque ambos son floats
  printf("o. %g \n", x/(y+z));
  printf("p. %g \n", (x/y)+z);
  printf("q. %g \n", 2*x/3*y);
  printf("r. %g \n", 2*x/(3*y));
  printf("s. %g \n \n", (14*y)+c);
  // printf("t. %g \n",  c * ( x % y )); Mi compilador no lo asimila porque ambos son floats
  printf("Grupo de ejercicios 3 \n \n");
/*
NOTA
- Las dos lineas que no reconoce mi compilador
- es porque los dos numeros que tenemos aun lado del %
- son float, y eso, al menos en los dos compiladores que lo intente
- no funciono, pero si se hace con calculadora, si funciona
*/
  char c1 = 69; //E = 69
  char c2 = 5;
  char c3 = 63; //? = 63
  printf("u. %d \n", c1);
  printf("v. %d \n", c1-c2+c3);
  printf("w. %d \n", c2 - 2);
  printf("x. %d \n", c2 + 50); // 2 = 50
  printf("y. %d \n", c3 + 35); // # = 35
  printf("z. %d \n", c1 % c3);
  printf("aa. %d \n", (c1/c2)*c3);
  printf("bb. %d \n", 3 * c2);
  printf("cc. %d \n", 51 * c2); // 3 = 51
  printf("dd. %d \n \n", c2 * 63); //? = 63
  printf("Grupo de ejercicios 3 \n \n");
  int ii = 33;
  int jj = 22;
  int xx = 5;
  int yy = 10;
  int cc = 12;
  int dd = 99;
  /*
  NOTA
  - Las variables tienen doble letra para que no se
  - sobre escriban con las otras variables que tambien
  - son letras.
  */
  printf("nota: 0 es negacion (false) y 1 afirmacion (true).\n");
  printf("a. %d \n", -(ii+jj));
  printf("b. %d \n", ++ii);
  printf("c. %d \n", ii++);
  printf("d. %d \n", --jj);
  printf("e. %d \n", ++xx);
  printf("f. %d \n", yy--);
  printf("g. %d \n", ii<=jj);
  printf("h. %d \n", cc > dd);
  printf("i. %d \n", xx < yy);
  printf("j. %d \n", xx>=0);
  printf("k. %d \n", jj != 6);
  printf("l. %d \n", cc == 99);
  printf("m. %d \n", 5*(ii*jj) > 99); //c = 99
  printf("n. %d \n", (2*xx+yy) == 0);
  printf("o. %d \n", 2*xx + (yy==0));
  printf("p. %d \n", 2*xx+yy == 0);
  printf("q. %d \n", !(x>0));
  printf("r. %d \n", (ii>0)&&(jj<5));
  printf("s. %d \n", (ii>0)||(jj<5));
  printf("t. %d \n", (xx>yy)&&(ii>0)||(jj<5));
  printf("u. %d \n", (xx<yy)&&(ii==0)||(jj<5));
}
