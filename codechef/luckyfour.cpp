//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int sum=0;
        string s;
        cin>>s;
        for(char i:s){
            if (i=='4'){
                sum++;
            }
            
        }
        cout<<sum<<endl;
    }
}