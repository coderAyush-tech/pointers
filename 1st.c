// #include<stdio.h>
// int main(){
//     int a =5;
//     int *ptr =&a;
//     printf("%u\n",ptr);
//     printf("%d\n",*ptr* (*ptr));
//    *ptr=99;
//    printf("%d\n",a);
// }
// #include<stdio.h>
// int swap(int *ptr,int *ptr1){
// int temp=0;
// temp=*ptr;
// *ptr=*ptr1;
// *ptr1=temp;
// }
// int main(){
//     int a=9,b=8;

//     swap(&a,&b);
//     printf("%d",a);
//     printf("%d",b);

// } 


// #include<stdio.h>
// void swap(int *ptr,int *ptr1){
// int temp=0;
// temp=*ptr;
// *ptr=*ptr1;
// *ptr1=temp;
// }
// int main(){
//     int a=9,b=8;

//     swap(&a,&b);
//     printf("%d",a);
//     printf("%d",b);

// } 



#include<stdio.h>
int main(){
    char str[10]={'a','y','u','s','h'};
   
    char *ptr = str;
    char temp;
    for(int i=0;i<str[i];i++){
        for(int j=i+1;j<str[j];j++){
            temp= ptr[i]; 
            ptr[i]= ptr[j];
            ptr[j] =temp;
        }
        printf("%c",ptr[i]);
    }

}