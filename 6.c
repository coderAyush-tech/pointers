#include<Stdio.h>
int main(){
    int max=-99999999;
    int arr[5]={6,2,5,4,3};
    int *ptr=&arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
           max=arr[i];
        }
         
    }
   // printf("%d",max);
   

    

}