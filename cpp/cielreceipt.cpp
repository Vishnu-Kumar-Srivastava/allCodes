//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int b,sumu=0;
    static int count=0;
    while(t--){
        int count=0;
        int p,lun;
        cin>>p;
        int a[12];
        for(int i=0;i<12;i++)
        {
            b=11-i;
            a[i]=pow(2,b);
            
            if(p-a[i]>=0){
                lun=p/a[i];
            count=count+lun;
            if(p%a[i]==0)
            {
                break;
            }
            }
            p=p%a[i];
            

        }
        cout<<count<<endl;
        

    }
}