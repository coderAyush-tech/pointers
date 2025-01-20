#include<stdio.h>
int main(){
    int n;
    printf("enter the size of arr");
    scanf("%d",&n);
    int arr[n];
    int temp=0;
    int *ptr = &arr[0];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j= i+1;j<n;j++){
            temp=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=temp;
        }
        printf("%d",ptr[i]);
    }


}