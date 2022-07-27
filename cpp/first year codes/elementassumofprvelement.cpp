//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    for(int i=1;i<5;i++)
    {
        a[i]=a[i-1] +a[i];
    }
    
    for(int j=0;j<5;j++)
    {
        cout<<a[j]<<" ";
    }
    
}
