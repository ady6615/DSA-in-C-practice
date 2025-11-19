#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

// array as parameter
void fun(int a[],int n){
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}

//Function retuirning an arrray

int *fun1(int n){
    int *p;
    p=(int *)malloc(n*sizeof(int));
    return(p);

}


int main(){
    int *b,i,n;
    int A[5]={2,3,4,5,6}; 
    n=5;  
    fun(A,5);
    b=fun1(n);
    for(i=0;i<n;i++)
    {
        b[i]=i+10;
    }
    for(i=0;i<n;i++)
    {
    printf("%d \n",b[i]);
    }
}

