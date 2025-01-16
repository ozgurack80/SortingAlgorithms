#include<stdio.h>

void swap(int* a, int*b);


int partition(int arr[],int left,int right){

    int pivot = arr[right];
    int i = left - 1; 

    for(int j = left;j<=right -1; j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }


    swap(&arr[i+1],&arr[right]);
    return i + 1; 
}

void quickSort(int arr[],int left,int right){
    if(left<right){

        int pi = partition(arr,left,right);

        quickSort(arr,left,pi - 1);
        quickSort(arr,pi + 1 ,right);
    }
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}



void printArray(int arr[], int arrSize){
    for(int i = 0; i<arrSize; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {7,3,1,6,4,2,9,8,5};
    int arrSize= sizeof(arr) / sizeof(arr[0]);

    printf("First version: ");
    printArray(arr,arrSize);

    quickSort(arr,0,arrSize-1);

    printf("Sorted version: ");
    printArray(arr,arrSize);
    return 0;
}