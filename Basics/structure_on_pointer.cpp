#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Rectangle{
    int lenght;
    int breadth;
};

int main(){
    struct Rectangle r={10,5};
    struct Rectangle *p=&r;

    cout<<r.lenght<<endl;
    cout<<r.breadth<<endl;

    cout<<p->lenght<<endl;
    cout<<p->breadth<<endl;

}