#include<stdio.h>

void insertionSort(int arr[], int arrSize){

    for(int i = 1;i<arrSize;i++){
        int key = arr[i];
        int j = i - 1;

        while(j>= 0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = key;
    }
}


void printArray(int arr[], int arrSize){
    for(int i = 0; i<arrSize; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}



int main(){
    int arr[] = {12,11,13,5,6,44,55,78,3,1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("First version: ");
    printArray(arr,arrSize);

    insertionSort(arr,arrSize);

    printf("Sorted version: ");
    printArray(arr,arrSize); 

    return 0;
}