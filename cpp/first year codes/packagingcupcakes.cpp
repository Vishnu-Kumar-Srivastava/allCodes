//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<(n/2)+1<<endl;
        }
        else
        cout<<(n+1)/2<<endl;
    }

}