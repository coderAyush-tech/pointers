#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter:");
    scanf("%d",&a);
     scanf("%d",&b);
     int *ptr=&a;
     int *ptr1=&b;
     printf("%d",*ptr+*ptr1);

}