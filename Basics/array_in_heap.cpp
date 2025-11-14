#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){
    int *p;

    char *q;
    p = (int*)malloc(5*sizeof(int));
    q = (char*)malloc(6*sizeof(char));
    p[0]=3;
    p[1]=31;
    p[2]=32;
    p[3]=33;
    p[4]=34;

    printf("%d \n%d \n%d \n%d \n%d \n",p[0],p[1],p[2],p[3],p[4]);

    for(int i=0; i<5 ; i++)
    {
        q[i]=q[i-1]+3;
    }
    for(int i=0; i<5 ; i++)
    {
        cout<<q[i]<<endl;
    }
    
    


}