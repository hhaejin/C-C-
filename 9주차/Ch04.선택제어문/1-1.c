#include <stdio.h>

int main(){
    int num = 0;
    
    scanf("%d", &num);

    if(num > 10){
        printf("%d\n", num);
        printf("Larger than 10.");
    }
    
    return 0;
}