//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int binarysearch(int a[], int target , int min,int max)
{
    if(min>max)
    {
        return -1;
    }
   else{
    int mid=(min+max)/2;

    if(a[mid]>target)
    {
        return binarysearch(a, target, min , mid-1);
    }
    else if(a[mid]<target)
    {
        return binarysearch(a, target, mid+1, max);
    }
    else
    {return mid;}
   }


}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cout<<"enter the target";
    cin>>target;
    cout<<binarysearch(a,target,0,n-1);
}