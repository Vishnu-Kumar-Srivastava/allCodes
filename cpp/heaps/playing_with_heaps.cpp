//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void heapify(vector<int>& heap, int curr, int size)
{
   int largest= curr;
   int l= 2*curr+1;
   int r= 2*curr+2;

   if(l<size and heap[l]>heap[largest])
      largest=l;
   if(r<size and heap[r]> heap[largest])   
      largest=r;
   if(largest!=curr)
   {
      int temp=heap[curr];
      heap[curr]=heap[largest];
      heap[largest=temp];
      
      heapify(heap, largest, size);
   }   
}
int main()
{
   int n,a;
   cout<<"enter the no of elements in the heap";
   cin>>n;
   vector<int> g1;
   
   for(int i=0;i<n;i++)
   {
      cin>>a;
      g1.push_back(a);
   }

   for(int i=0; i<n; i++)
   {
      cout<<g1.at(i)<<" ";
   }
}