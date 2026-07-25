#include<stdio.h>

void printCombination(int arr[],int k){
    for(int i = 0; i < k;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}
void backtrack(int n,int k,int start,int arr[],int index){
    if(index == k){
        printCombination(arr,k);
        return;
    }
    for(int i = start;i<=n;i++){
        arr[index] = i;
        backtrack(n,k,i+1,arr,index + 1);
    }
}
void combine(int n,int k){
    int arr[k];
    backtrack(n,1,k,arr,0);
}
int main()
{
    int n=4,k=2;

    combine(n,k);

    return 0;
}
