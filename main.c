#include <stdio.h>

int main() {
  float diem;
  scanf("%f",&diem);

  if (diem >= 9 && diem <= 10){
    printf("A");
  }
  else if (diem >= 8 && diem <= 8.9){
    printf("B+");  
  }
  else if (diem >= 7 && diem <= 7.9){
    printf("B");  
  }
  return 0;
}