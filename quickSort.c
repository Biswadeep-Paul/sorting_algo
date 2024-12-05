#include <stdio.h>


int partition(int arr[], int l, int h){

    int pivot = arr[h];

    int i = l-1;

    for (int j = l ; j <= h-1 ;j++){
        if (arr[j] < pivot){
            i++;
            int temp1 = arr[i];
            arr[i] = arr[j];
            arr[j] = temp1;
        }
    }

    int temp2 = arr[i+1];
    arr[i+1] = arr[h];
    arr[h] = temp2;

    return i+1;
}


void quickSort(int arr[], int l, int h){
    if (l<h){

        int pi = partition(arr,l,h);

        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,h);
    }
}

int main(){
    int arr[] = {23,1,10,5,2};

    int n = sizeof(arr)/sizeof(arr[0]);

    int i,j;

    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }

    printf("\n");

    quickSort(arr,0,n-1);

    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
}