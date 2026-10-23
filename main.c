#include <stdio.h>

int main() {
  float m,h;
  scanf("%f%f",&m,&h);
  float bmi = m / ((h/100)*(h/100));

  if (bmi < 18.5){
    printf("UNDERWEIGHT");
  }
  
  else if ( (bmi >= 18.5 )&& (bmi < 25.0000000001)){
    printf("NORMAL");
  }
  
  else if ( (bmi >= 25) && (bmi < 30.00000000001) ){
    printf("OVERWEIGHT");
  }
 
  else{
    printf("OBESE");
  }
  return 0;
}