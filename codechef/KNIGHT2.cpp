//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
   int t; cin>>t;
   while(t--)
   {
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      int sum=a+b;
      int som=c+d;
      if(sum%2==0 && som%2==0)
      cout<<"YES"<<endl;
      else if(sum%2!=0 && som%2!=0)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
   }
}