#include <stdio.h>

#define MAX_STUDENTS 50

void bubbleSort(int*arr, int size);

void bubbleSort(int*arr,int size) {
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(*(arr+j)>*(arr+j+1)){
                int temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}

int main()
{
    int numStudents;
    printf("학생 수 입력:",MAX_STUDENTS);
    scanf("%d",&numStudents);
    if(numStudents > MAX_STUDENTS) {
        printf("입력 가능한 학생 수 초과\n");
        return 1;
    }

    int*gradesPointer;
    int grades[MAX_STUDENTS];
    gradesPointer = grades;

    for(int i=0; i<numStudents; i++) {
        printf("%d번 학생 최종 성적",i+1);
        scanf("%d",gradesPointer+i);
    }
}