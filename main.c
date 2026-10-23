#include <stdio.h>

int main(){
  float diem;
  scanf("%f",&diem);

  if (diem >= 9.0 && diem <= 10){
    printf("A");
  }
  
  else if (diem >= 8.0 && diem < 9){
    printf("B+");  
  }
  
  else if (diem >= 7.0 && diem < 8){
    printf("B");  
  }
  
  else if (diem >= 6.5 && diem < 7){
    printf("C+");  
  }
  
  else if (diem >= 5.5 && diem < 6.5){
    printf("C");  
  }
  
  else if (diem >= 5 && diem < 5.5){
    printf("D+");  
  }
  
  else if (diem >= 4 && diem < 5){
    printf("D");  
  }
  else if (diem < 4){
    printf("F");
  }
  
  return 0;
}