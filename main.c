#include <stdio.h>

void res(){
    int a , b;
    scanf("%d%d",&b,&a);
    
	if (a < 0 || b <= 0){
        printf("INVALID");
    }
    else if (a >= 500000 && b <= 15){
       printf("%d",0);
    }
    else if (b <= 5 && b >= 1){
       printf("%d",15000);
    }
    else if (b > 5 && b <= 15){
        printf("%d",25000);
    }
    else{
        printf("%d",40000);
    }
}

int main(){
    res();
}  