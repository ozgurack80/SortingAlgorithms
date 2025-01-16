#include<stdio.h>

void merge(int arr[], int left,int mid,int right){
    int i,j,k;
    int a = mid - left + 1;
    int b = right - mid;


    int l[a],r[b];

    for(i=0;i<a;i++)
        l[i] = arr[left+i];
    for(j=0;j<b;j++)
        r[j] = arr[mid + 1 +j];


        i=0;
        j=0;
        k= left;

        while(i < a &&j < b){
            if(l[i]<=r[j]){
                arr[k] = l[i];
                i++;
            }
            else{
                arr[k] = r[j];
                j++;
            }
            k++;
        }


        while (i < a){
            arr[k] = l[i];
            i++;
            k++;
        }

        while (j < b){
            arr[k] = r[j];
            j++;
            k++;
        }


}

void mergeSort(int arr[], int left,int right){
    if(right>left){
        int mid = left + (right - left) / 2;

        mergeSort(arr,left,mid);
        mergeSort(arr,mid + 1,right);

        merge(arr,left,mid,right);
    }
}

void printArray(int arr[], int arrSize){
    for(int i = 0; i<arrSize; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main(){
    int arr[] = {4,3,5,7,6,8,1,2};
    int arrSize = sizeof(arr) / sizeof(arr[0]);



    printf("First version: ");
    printArray(arr,arrSize);

    mergeSort(arr,0,arrSize-1);
    printf("Sorted version: ");
    printArray(arr,arrSize);

    return 0;
}