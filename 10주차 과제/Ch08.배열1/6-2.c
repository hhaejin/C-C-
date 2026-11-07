#include <stdio.h>

int main(){
    int arr[100];
    int i=0;
    while (i<100){
        scanf("%d",&arr[i]);

        if(arr[i]==0){
            break;
        }
        i++;
    }
    int max=arr[0];
    int min=arr[0];

    for(int j=1;j<i;j++){
        if(max<arr[j]){
            max=arr[j];
        }
        if(min>arr[j]){
            min=arr[j];
        }
    }
    printf("%d",max-min);

    return 0;
}