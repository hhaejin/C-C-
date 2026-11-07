#include <stdio.h>

int main(){
    int a=1;
    int b=1;
    int c;

    for(int i=1; i<=20; i++){
        printf("%d ",a);

        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}