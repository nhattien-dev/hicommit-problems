#include <stdio.h>

int main() {
  int year,month,day,check;
  scanf("%d%d%d",&day,&month,&year);

  if (month < 1 || month > 12 || day < 1 || day > 31){
    printf("INVAILID");
    return 0;
  }
  


  
  return 0;
}