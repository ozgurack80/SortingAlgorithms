#include<stdio.h>
#include<stdbool.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int arrSize){
    bool swapped;

    for(int i = 0; i< arrSize-1;i++){
        swapped = false;
        for(int j = 0; j<arrSize -i - 1; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped = true;
            }
        }
    if(swapped == false)
        break;
    }
}

void printArray(int arr[], int arrSize){
    for(int i = 0; i<arrSize;i++){
        printf("%d ",arr[i]);
    }
}


int main(){
    int arr[] = {5,6,1,3};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("First version: ");
    printArray(arr,arrSize);
    bubbleSort(arr,arrSize);
    printf("Sorted version: ");
    printArray(arr,arrSize);

    return 0;
}