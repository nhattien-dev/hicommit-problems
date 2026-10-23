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
	

	
	
	
	printf("%lld",s);
	return 0;
}