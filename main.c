#include <stdio.h>

int main() {
  float gpa,min,nghi;

  scanf("%f%f%f",&gpa,&min,&nghi);

  if (nghi > 3)
  {
    printf("FAIL_ATTENDANCE");
    return 0;
  }
  else if (min < 4)
  {
    printf("FAIL_SUBJECT");
    return 0;
  }

  if (gpa >= 8 && min >= 7)
  {
    printf("EXCELLENT");
  }
  else if (gpa >= 6.5 && min >= 5)
  {
     printf("GOOD"); 
  }
  else if (gpa >= 5 && min >= 4);
  {
    printf("PASS");
  }
  else
  {
    printf("FAIL");
  }

  
  return 0;
}