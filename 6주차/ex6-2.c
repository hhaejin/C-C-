#include <stdio.h>

int main(void)
{
    int arr[] = {5, 3, 4, 1, 2};
    int n = 5;

    for (int i = 1; i < n; i++) {
        int key = arr[i]; //현재 삽입할 값을 key에 저장
        int j = i - 1;

        // key보다 큰 값을 오른쪽으로 한 칸씩 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // 빈자리가 생기면 key를 알맞은 위치에 삽입
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}