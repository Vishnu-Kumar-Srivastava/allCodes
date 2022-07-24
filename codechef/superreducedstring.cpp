//SUPER REDUCED STRING
//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void deletee(char arr[], int n, int i)
{
    for(int j=i; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }
 
}
int main()
{
    char arr[100];
    gets(arr);
    int length=strlen(arr);
    for(int i=0;i<length-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            deletee(arr , length--, i );
            deletee(arr , length--, i );
            i--;
        }
    }
    for(int i=0; i<length ; i++)
    {
        cout<<arr[i];
    }
}