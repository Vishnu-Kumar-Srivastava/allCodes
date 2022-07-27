//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void insertion_sort(int arr[], int n)
{   
    for(int i=1; i<n; i++)
    {
        int j=i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{

}