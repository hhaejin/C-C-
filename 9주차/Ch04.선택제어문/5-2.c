#include <stdio.h>

int main() {
    int num = 0;
    int num1 = 0;
    int num2 = 0;
    scanf("%d",&num);
    scanf("%d",&num1);
    scanf("%d",&num2);

    if(num>0 && num1>0 && num2>0){
        printf("All Positive\n");
    }else if(num==0 || num1==0 || num2==0){
        printf("Contain Zero\n");
    }else{
        printf("Mixed");
    }
}
