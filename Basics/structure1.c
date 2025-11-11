#include<stdio.h>
struct Rectangle{
int length;
int breadth;
};

void main()
{
    int total=0;
    int total2=0;
    struct Rectangle R1;
    struct Rectangle R2;
    R1.length= 30;
    R1.breadth =20;
    R2.length= 30;
    R2.breadth =20;
    total=R2.length*R2.breadth;
    total2=R1.length*R1.breadth;
    printf("%d \n",total);
    int a=0;
    printf("%d \n",total2);
}