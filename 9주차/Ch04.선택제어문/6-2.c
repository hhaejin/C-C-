#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d\n",&num);

    if(num>0){
        printf(num %2==0 ?"Even Number":"Odd Number");
    }else if(num<0){
        printf("Non positive");
    }
}