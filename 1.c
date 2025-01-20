#include<stdio.h>
int swap(int *ptr,int *ptr1){
    int temp=0;
    temp=*ptr;
    *ptr=*ptr1;
    *ptr1=temp;
}
int main(){
    int a,b;
    printf("enter:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d",a);
    printf("%d",b);


}