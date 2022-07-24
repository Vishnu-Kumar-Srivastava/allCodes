//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int a=5;
    int *p=&a;
    int **m=&p;
    //pointer to pointer
    cout<<*m<<endl;
    cout<<**m<<endl;
    cout<<m<<endl;
    
}