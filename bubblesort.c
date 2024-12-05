#include <stdio.h>
int main(){

    int arr[]={23,1,10,5,2};
    int i,j,temp;
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("\nThe original array:");
    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }

    for (i=0;i<n;i++){
        for (j=0;j<n-1;j++){
            if (arr[j]> arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }


    printf("\nThe sorted array(using bubble sort)");
    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }

    return 0;
}