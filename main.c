#include <stdio.h>

int main() {
  double qd;
  double money = 0;

  scanf("%lf",&qd);

  if (qd <= 1)
  {
    money += qd * 15000;
  }
  else if (qd > 1 && qd <= 5)
  {
    money += 15000 + (qd -1)*13000;
  }

    
  printf("%.0lf",money);
  return 0;
}