#include <stdio.h>

int main(){
    int arr[10];
    int sum=0;
    int odd_sum=0;
    double avg;

    for(int i=0;i<10; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<10; i++){
        if(i%2==0){
            odd_sum+=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }
    avg=odd_sum/5.0;

    printf("sum : %d\n",sum);
    printf("avg : %.1f",avg);

    return 0;
}