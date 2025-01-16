#include<stdio.h>

selectionSort(int arr[], int arrSize){
    for(int i= 0; i<arrSize -1; i++){
        int minIndex = i;

        for(int j = i; j< arrSize;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;


    }
}


void printArray(int arr[], int arrSize){
    for(int i = 0; i<arrSize; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}




int main(){

    int arr[] = {64,25,12,22,11,42,86,19};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("First version: ");
    printArray(arr,arrSize);

    selectionSort(arr,arrSize);

    printf("Sorted version: ");
    printArray(arr,arrSize);
    return 0;
}