//This code is made by Vishnu Kumar Srivastava
// the running time of this code is nlogn
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void heapify(vector<int>& heap, int curr, int size)
{
   int largest=curr;
   int l= 2*curr+1;
   int r=2*curr+2;
   if(l<size and heap[l]> heap[largest])
   {
      largest=l;
   }
   if(r<size and heap[r]> heap[largest])
   {
      largest=r;
   }
   if(largest!=curr)
   {
      int temp=heap[curr];
      heap[curr]=heap[largest];
      heap[largest]=temp;
      heapify(heap, largest, size);
   }
}
void heapsort(vector<int>& heap)
{
   //build heap rearrange array
   for(int i= heap.size()/2 -1; i>=0;i--)
   {
      heapify(heap,i, heap.size());
   }
   for( int i= heap.size()-1; i>0 ; --i)
   {
      int temp=heap[0];
      heap[0]=heap[i];
      heap[i]=temp;

      heapify(heap,0,i);
   }
}
int main()
{
   vector<int> heap{9,6,8,2,1,11,3};
   heapsort(heap);
   for(int i=0; i<heap.size(); i++)
   {
      cout<<heap[i]<<" ";
   }
   
}