#include<stdio.h>
struct Rectangle{
int length;
int breadth;
};

void main()
{
    int total=0;
    struct Rectangle R1;
    R1.length= 30;
    R1.breadth =20;
    total=R1.length*R1.breadth;
    printf("%d",total);
}