#include <stdio.h>

int main(){
    int a=100;
    int b;
    int c;

    scanf("%d",&b);
    printf("%d %d ",a,b);

    while(1){
        c=a-b;
        printf("%d ",c);
        if(c<0){
            break;
        }
        a=b;
        b=c;
    }
    return 0;

}