//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{ int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<b)
        {
            cout<<b<<" "<<a+b;
        }
        else
        {
            cout<<a<<" "<<a+b;
        }
               
    }

}