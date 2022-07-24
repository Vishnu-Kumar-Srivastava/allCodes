//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;cin>>t;
    vector<int> res;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        int arr[n];
        int isum=0,usum=0,loss;
        for (int i=0;i<n;i++){
            cin>>arr[i];
            isum+=arr[i];
            if (arr[i]<=k){
                usum+=arr[i];
            }
            else{
                usum+=k;            
            }

        }
        loss=isum-usum;
        res.push_back(loss);
    }
    for (int i:res){
        cout<<i<<endl;
    }
}