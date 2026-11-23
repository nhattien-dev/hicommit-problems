#include <stdio.h>

int main(){
  int year,month,day;
  int check = 0;
  scanf("%d%d%d",&day,&month,&year);

  if (year < 0)
  {
    printf("INVALID");
    return 0;
  }

  if ((day <= 31 && day >= 1) && (month == 1 || month == 3 || month == 5 || month == 7 ||month == 8 || month == 10 || month == 12))
  {
      printf("VALID");
  }
  else if ((day <= 30 && day >= 1) && (month == 4 || month == 6 || month == 11 || month == 9)){
    printf("VALID");
  }
  
  else if (((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) && ((day <=  29 && day >= 1) && (month == 2)))
  {
    printf("VALID");
    check = 1;
  }
  else if (((check == 0) && (day <= 28 && day >= 1)) &&  (month == 2))
  {
    printf("VALID");
  }
  else
  {
    printf("INVALID");
  }

  return 0;
}