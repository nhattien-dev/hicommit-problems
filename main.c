#include <stdio.h>

int main(){
  int year,month,day,check;
  scanf("%d%d%d",&day,&month,&year);


  if ((day <= 31 && day >= 1) && (month == 1 || month == 3 || month == 5 || month == 7 ||month == 8 || month == 10 || month == 12))
  {
      printf("VAILD");
      return 0
  }
  
  // if ((year % 400 == 0) || (year % 4 && year % 100 != 0))
  // {
    
  // }

  return 0;
}