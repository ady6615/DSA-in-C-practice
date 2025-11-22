#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct Rectangle{
    int lenght;
    int breadth;
};

void initialize(struct Rectangle *r,int l,int b){
    r->lenght=l;
    r->breadth=b;
}

int area(struct Rectangle *r){
        return (r->lenght)*(r->breadth);
}

void changeLength(struct Rectangle *r,int l){
    r->lenght=l;
}
void changeBreadth(struct Rectangle *r,int b){
    r->breadth=b;
}

int main(){
    struct Rectangle r;
    initialize(&r,10,5);
    changeBreadth(&r,10);
    changeLength(&r,20);
    cout<<area(&r)<<endl;
}