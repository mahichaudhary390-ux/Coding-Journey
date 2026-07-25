#include<stdio.h>
void rearrange(int arr[100],int n){
    int temp[n];
    int k = 0;

    for(int i = 0; i < n;i++){
        if(arr[i] < 0)
        temp[k++] = arr[i];
    }
    for(int i = 0;i<n;i++){
        if(arr[i] >=0)
           temp[k++] = arr[i];
    }
    for(int i = 0;i<n;i++){
        arr[i] = temp[i];

    }
}
int main(){
    int arr[] = {1,-2,3,-4,-1,4,-5,6};
    int n = sizeof(arr[0]);

    rearrange(arr,n);

    for(int i = 0;i<n;i++){
        printf("%d",arr[i]);
    }   
    return 0;   
}