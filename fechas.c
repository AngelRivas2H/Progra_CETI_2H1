#include<stdio.h>

int main (void){
  int i_dia, i_mes, i_year, i_yearType;
  printf("===================== VALIDADOR DE FECHAS =====================\n");
  printf("======================= By: Angel Rivas =======================\n");
  printf("Introduce year, month and day: \n");
  do {
    printf("Year (1920 - 2018): ");
    scanf("%d", &i_year);
  } while(!(i_year >= 1920 && i_year <= 2018));
  if ( !(i_year % 4) && (i_year % 100) || !(i_year % 400) )  {
		printf("It is a leap-year\n");
    i_yearType =1;
	} else {
		printf("Aint a leap-year\n");
    i_yearType =0;
	}
  do {
    printf("Month: ");
    scanf("%d", &i_mes);
  } while(!(i_mes >= 1 && i_mes<=12));

  if (i_yearType == 1) {
    switch (i_mes) {
      case 1:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 2:
        do {
          printf("Day: ");
          scanf("%d", &i_dia);
        } while(!(i_dia >= 1 && i_dia<=29));
        break;
      case 3:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 4:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=30));
        break;
      case 5:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 6:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=30));
        break;
      case 7:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 8:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 9:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=30));
        break;
      case 10:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 11:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=30));
        break;
      case 12:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      default:
        printf("Something went wrong!\n");
        return 0;
    }
  }else if(i_yearType == 0 ){
    switch (i_mes) {
      case 1:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 2:
        do {
          printf("Day: ");
          scanf("%d", &i_dia);
        } while(!(i_dia >= 1 && i_dia<=28));
        break;
      case 3:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 4:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=30));
        break;
      case 5:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 6:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=30));
        break;
      case 7:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 8:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 9:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=30));
        break;
      case 10:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      case 11:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=30));
        break;
      case 12:
      do {
        printf("Day: ");
        scanf("%d", &i_dia);
      } while(!(i_dia >= 1 && i_dia<=31));
        break;
      default:
        printf("Something went wrong!\n");
        return 0;
    }
  }

  printf("(d/m/y) The following date actually exists: %d / %d / %d \n",i_dia,i_mes,i_year);
  return 0;
}
