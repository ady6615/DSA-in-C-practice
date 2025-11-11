#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
#define Max 10
int main()
{
    int i;
    int a [Max] = {2,5,23,566,423,45 ,75,23,76,3};
    int *p;
    p = a;
    printf("%d \n",p[2]);
    printf("%d \n",Max);
    for(i=0 ; i<=Max;i++ )
        {
            printf("%d \n",p[i]);
        }
    cout<<"Hello World"<<endl;
return 0;
}