//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;cin>>t;
    int a,b;
    while(t--)
    {
        cin>>a;
        cin>>b;
        if(a%2==0 && b<a )
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }

    }
}