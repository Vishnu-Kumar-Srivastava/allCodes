//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i= n%4;
        if(i!=0)
        {
            cout<<(n+4)/4<<endl;
        }
        else
        cout<<n/4<<endl;

    }
}