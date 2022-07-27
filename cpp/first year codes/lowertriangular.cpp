//This code is made by Vishnu Kumar Srivastava
//lower triangle matrix
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
int arr[10];
cout<<"Enter the  elements in row major form"<<endl;
for(int i=0;i<10;i++)
{
    cin>>arr[i];
}
int k=0;
for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
        if(i<j)
        {
            cout<<0<<" ";
           
        }
        else
        {
            cout<<arr[k]<<" ";
            k++;
        }
    }
    cout<<endl;
}

}