#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

//swaping without actually returning parameters (a and b remains same in main)

void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

//swaping parameters using pointers

void swappointer(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *a = temp;
}

//swaping parameters using references

void swapreference(int &a,int &b){
    int temp;
    temp = a;
    a=b;
    a=temp;

}

int main(){
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    cout<<a<<b<<endl;
    swappointer(&a,&b);
    cout<<a<<b<<endl;
    swapreference(a,b);
    cout<<a<<b<<endl;

    return 0;
}

