#include <stdio.h>

int main(){
  
  int k;
  long long s = 0;
  scanf("%d",&k);

  if (((k - 50 ) >= 50) && (k > 0)){
    s+= 50 * 1678;
    k -= 50;
  }
  else{
    s+= (50 - k) * 1678;
  }

  if (((k - 50) >= 50) && (k > 0)){
    s += 50 * 1734;
    k -= 50;
  }
  else{
    s += ((50 - k) * 1734);
    k -= (50 - k);
  }

  if (((k - 100) >= 100) && (k > 0)){
    s += k * 2014;
    s -= (100 - k);
  }

  printf("%lld",s);
  
  return 0;
}