#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct Rectangle{
    int lenght;
    int breadth;
};

//structure passed as value
int area(struct Rectangle r)
{
    int area;
    area = r.lenght*r.breadth;
    return area;
}

//call by pointer
void changeLength(struct Rectangle *r,int l)
{
    r->lenght=l;
}

//call by reference
void changeBreadth(struct Rectangle &r,int b)
{
    r.breadth=b;
}

int main(){
    struct Rectangle r={10,2};
    printf("area of rectangle is : %d\n",area(r));
    changeLength(&r,20);
    printf("area of rectangle is : %d\n",area(r));
    changeBreadth(r,5);
    printf("area of rectangle is : %d\n",area(r));
    return 0;
}