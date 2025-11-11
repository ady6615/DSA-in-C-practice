#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr;
    int *p;
    p = (int*)malloc(sizeof(int*));

    int a =10;
    ptr = &a;
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",&ptr);

    // print("")
}