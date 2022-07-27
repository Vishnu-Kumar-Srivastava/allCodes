//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,m,h=0;
     cout<< "Enter the no. of elements in the array\t";
    cin>>n;
   int a[n];
  
   for(int i=0;i<n;i++)
   {
       cin>> a[i];
    
   }
    cout<< "Enter the no. you want to searrch";
   cin>> m;
   
  
   for(int i=0; i<n;i++)
   {
     if(a[i]==m)
     {
         cout<< "The no. is there at "<< i <<" index";
         h=1;
         break;
         
     }
    }
    
    if (h==0){
        cout<<-1;
    }

}