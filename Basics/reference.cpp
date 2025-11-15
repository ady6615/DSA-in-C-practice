#include<stdio.h>
#include<stdlib.h>
#include<iostream>
 
using namespace std;

int main(){
    int a=10;
    int b=10;
    int &r=a;

    cout<<a<<endl;
    a= 11;
    b= 20;
    cout<<a<<endl;
    r=12;
    cout<<a<<endl;
    cout<<r<<endl;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}