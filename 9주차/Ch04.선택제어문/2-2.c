#include <stdio.h>

int main(){
    int num = 0;
    int weight = 0;
    scanf("%d",&num);
    scanf("%d",&weight);
    int a = weight + 100 - num;

    printf("%d\n",a);
    if (a>0){
        printf("Obesity\n");
        printf("Need control");
    }
}