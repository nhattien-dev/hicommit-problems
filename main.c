#include <stdio.h>

int main() {
  float m,h;
  scanf("%f%f",&m,&h);
  float bmi = m / ((h/100)*(h/100));

  if (bmi < 18.5){
    printf("UNDERWEIGHT");
  }
  
  else if ( (bmi >= 18.5 )&& (bmi < 24.9999f)){
    printf("NORMAL");
  }
  
  else if ( (bmi >= 24.9999f) && (bmi < 29.9999f) ){
    printf("OVERWEIGHT");
  }
 
  else{
    printf("OBESE");
  }
  return 0;
}