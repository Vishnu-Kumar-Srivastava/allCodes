//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
int t;cin>>t;
int sumi(int);
while(t--)
{
    int d,n,sums=0;
    cin>>d;
    cin>>n;
    for(int i=1;i<=d;i++)
    {
        sums=sumi(n);
        n=sums;
    }
    cout<<sums<<endl;

}
}
int sumi(int a)
{
    int c=0;
    for(int i=1;i<=a;i++)
    {
        c=c+i;
    }
    return (c);
}