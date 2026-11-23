#include <stdio.h>

int main() {
  double qd;
  double money = 0;

  scanf("%lf",&qd);

  if (qd <= 1)
  {
    money += qd * 15000;
  }
  printf("%lf",money);
  return 0;
}