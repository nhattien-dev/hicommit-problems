#include <stdio.h>

int main() {
  float diem,drl;
  scanf("%f%f",diem,drl);
  if (diem >= 9.0 && drl >= 90){
    printf("HOC_BONG_XUAT_SAC");
  }
  
  else if (diem >= 9.0 && drl >= 80 && drl < 90){
    printf("HOC_BONG_GIOI");
  }

  else if (diem >= 8.0 && drl >= 80 && drl < 90){
    printf("HOC_BONG_GIOI");
  }
  
  return 0;
}