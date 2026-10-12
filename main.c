#include <stdio.h>
#include <string.h>
int main(){
    int temp;
    char resul[10];

    scanf("%d",&temp);

    if (temp <= 15){
        strcpy(resul,"LANH");
    }
    else if (15 < temp && temp < 25){
        strcpy(resul,"MAT");
    }
    
    else if (temp >= 25 && temp < 35){
        strcpy(resul,"NONG");
    }
    else{
        strcpy(resul,"RAT_NONG");
    }
    fputs(resul,stdout);
    return 0;
}

