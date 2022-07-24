//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int solution()
{
    int x; int y;
    cin>>x;cin>>y;
    int count=0;
    if(x<y)
    {
        int t=y-x;
       
        {
            for(int i=1;i<=t; i++)
            {
                x=x+1;
                count++;
                
            }
            return count;
           
        }
    }
    else if(x>y)
    {
        int t=x-y;
        int m=(x-y)%2;
        {
            if(m==0)
            {
                for(int i=1;i<=t/2;i++)
                {
                    y=y+2;
                    count++;
                }
                return count;
            }
            else
            {
                for(int i=1;i<=(t+1)/2;i++)
                {
                    y=y+2;
                    count++;
                }
                x=x+1;
                count++;
                return count;
            }
        }
    }
    else
    count=0;
    return count;
    

}
int main()
{
int t;cin>>t;
while(t--)
{
    cout<<solution()<<endl;
    
}
}