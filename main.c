#include <iostream>

int main(){
	unsigned long long s1= 0;
	unsigned long long s2 = 1;
	unsigned long long res = 0;

	
	int n;
	scanf("%d",&n);
	if (n = 0){
		res = 0;
	}
	else{
	
		for (int i = 2; i <= n; i++){
			res = s1 + s2;
			
			s1 = s2;
			s2 = res;
		}
	}
	printf("%llu",res);
}