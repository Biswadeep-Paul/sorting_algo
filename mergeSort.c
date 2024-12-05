#include<stdio.h>


void merge(int arr[], int l, int mid, int h){
    int n1 = mid - l+1;
    int n2 = h - mid;

    int i,j,k;

    int L[n1],R[n2];

    for (i=0;i<n1;i++){
        L[i] = arr[l+i];
    }

    for (j=0;j<n2;j++){
        R[j] = arr[mid+1 + j];
    }

    i=0,j=0,k=l;

    while(i< n1 && j <n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{

        arr[k] = R[j];
        j++;
        }
        k++;
    }

    while( i< n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j< n2){
        arr[k] = R[j];
        j++;
        k++;
    }

    


}


void mergeSort(int arr[],int l, int h){
    if (l<h){
        int mid = (l+h)/2;

        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);

        merge(arr,l,mid,h);
    }
}


int main(){

    int arr[]={23,1,10,5,2};

    int n = sizeof(arr)/sizeof(arr[0]);

    int i,j;

    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }

    printf("\n");
    mergeSort(arr,0,n-1);

    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }

    return 0;
}