#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d\n",&num);

    if (num>=90){
        printf("Excellent");
    }else if(num>=80){
        printf("Good");
    }else if(num>=70){
        printf("Pass");
    }else{
        printf("Fail");
    }
}