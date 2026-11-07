#include <stdio.h>

int main(){
    int num;
    int count=0;
    int sum=0;
    double avg;

    for(int i=0; i<100; i++){
        scanf("%d",&num);

        if(num==0){
            break;
        }
        if(num%5==0){
            count++;
            sum+=num;
        }
    }
    avg = (double)sum / count;

    printf("Multiples of 5 : %d\n",count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n",avg);

    return 0;
}