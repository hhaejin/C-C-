#include <stdio.h>

int binarySearch(int arr[], int size,int target){ // 밑에 있는 size랑 다름
    int left = 0; //시작 위치를 0으로 설정
    int right = size -1; //끝 위치를 배열크기 -1로 설정

    while(left<=right){ //시작 위치가 끝 위치보다 작거나 같을 동안 반복
        int mid = (left+right) / 2; //중간 위치를 계산
        if(arr[mid]==target){ //만약 중간 위치 값이 찾을값과 같다면
            return mid; // 중간 위치를 반환하고 종료 
        }
        else if(arr[mid]<target) { //그렇지 않고 중간 위치의 값이 찾을값보다 작다면
            left = mid +1; //시작 위치를 중간 위치 +1 로 변경
        }
        else{//그렇지 않다면 
            right = mid -1; //끝 위치를 중간 위치 -1 로 변경
        }
    }
    return -1; //반복이 종료 될 때까지 값을 찾지 못했다면 -1 반환
}

int main(){
    int arr[] = {2,5,8,12,16,23,38,56,72,91}; //반드시 정렬된 배열
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr,size,target);

    if(result != -1){
        printf("원소 %d는 인덱스 %d에 존재합니다. \n", target,result);
    }else {
        printf("원소를 찾지 못했습니다.\n");
    }
}