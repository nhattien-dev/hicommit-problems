#include <stdio.h>

int main(){
	
	int k;
	long long s = 0;
	scanf("%d",&k);
	
	if (((50 - k <= 0) && (k > 0))){
		s += 50 * 1678;
		k -= 50;
	}
	else{
		s += k * 1678;
		k -= k; 
	}
	
	if ((100 - k <= 0) && (k > 0)){
		s += 50 * 1734;
		k -= 50;
	}
	else{
		s += k * 1734;
		k -= k;
	}
	
	if ((100 - k <= 0) && (k > 0)){
		s += 100 * 2014;
		k -= 100;
	}
	else{
		s+= k * 2014;
		k -= k;
	}
	
	if ((100 - k <= 0) && (k > 0)){
		s += 100 * 2536;
		k -= 100;
	}
	
	else{
		s += k * 2536;
		k -= k;
	}
	
	if ((100 - k <= 0) && (k > 0)){
		s += 100 * 2834;
		k -= 100;
	}
	else{
		s += k * 2834;
		k -= k;
	}
	
	if (k > 0){
		s += k*2927;
		k - =k;
	}
	
	printf("%lld",s);
	return 0;
}