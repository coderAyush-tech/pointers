#include<stdio.h>
int main(){
    int a,b;
    printf("enter:");
    scanf("%d%d",&a,&b);
    int *ptr=&a;
    int *ptr1=&b;
    printf("%d",*ptr-*ptr1);

}