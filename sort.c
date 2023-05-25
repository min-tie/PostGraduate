#include <stdio.h>
#include <math.h>
#define MaxSize 100
int A[10] = {18,90,79,28,823,2131,2330,1,23,91};

void swap(int *a, int *b){//交换数组中的两个元素
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void pirntA(int A[], int n){
    int i;
    for (i = 0; i < n;i++)
        printf("%d, ", A[i]);
    printf("\n");
}

void QuickSort(int A[], int n);//快速排序
void SelectSort(int A[], int n);//选择排序

void QuickSort(int A[], int n){
    int pivot = max(A[0], A[n - 1]);
}

void SelectSort(int A[], int n){
    int min;
    int index;
    int i, j;
    for (i = 0; i < n -1;i++){
        min = A[i];
        index = i;
        for (j = i + 1; j < n;j++){
            if(A[j] < min){
                min = A[j];
                index = j;
            }
        }
        if(index!=i){
            // int temp = A[i];
            // A[i] = A[index];
            // A[index] = temp;
            swap(A+i, A+index);
        }
    }
}

int main(){
    printf("------Before Sorting-----\n");
    pirntA(A, 10);
    printf("------After Sorting------\n");
    SelectSort(A, 10);
    pirntA(A, 10);
    return 0;
}