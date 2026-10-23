#include <stdio.h>

int main() {
  float diem;
  int drl;
  scanf("%f%d",&diem,&drl);
  if (diem >= 9.0 && drl >= 90){
    printf("HOC_BONG_XUAT_SAC");
  }
  
  else if (diem >= 9.0 && drl >= 80 && drl < 90){
    printf("HOC_BONG_GIOI");
  }

  else if (diem >= 8.0 && drl >= 80 && drl < 90){
    printf("HOC_BONG_GIOI");
  }
  else if (diem >= 7.0 && drl >= 70 && drl < 80 || drl >= 80 && drl < 90 || drl >= 90){
    printf("HOC_BONG_KHA");
  }
  else if (diem >= 8.0 && drl >= 70 && diem <= 80){
    printf("HOC_BONG_KHA");
  }
  else if (diem >= 9.0 && drl >= 70 && diem <= 80){
    printf("HOC_BONG_KHA");
  }
  else{
    prinft("KHONG DAT");
  }
  
  return 0;
}