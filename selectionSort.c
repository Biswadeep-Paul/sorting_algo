#include <stdio.h>
int main(){

    int arr[]={23,1,10,5,2};

    int i,j,min_idx,temp;

    int n = sizeof(arr)/sizeof(arr[0]);

    printf("\nthe original array:");
    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }

    for (i=0;i<n-1;i++){
        min_idx = i;
        for (j=i+1;j<n;j++){
            if (arr[j]< arr[min_idx]){
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
        
    }

printf("\nthe sorted array:");
    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    

    return 0;
}