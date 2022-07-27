//This code is made by Vishnu Kumar Srivastava
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int r,c;
    cout<<"This program is only valid for matrix whose all elements of first column are not zero";
    cout<<"Enter the no. of rrows";
    cin>> r;
    cout<<"\n Enter the no. of coulumns";
    cin>> c;
    int M[r][c];
    int a,b,k;
    for(a=0;a<r;a++)
    {
        for(b=0;b<c;b++)
        {
            cin>> M[a][b];
        }
    }
    for(a=0;a<r;a++)
    {
        for(b=0;b<c;b++)
        {
                if(M[a][b]==1)
                {
                    for(int i=a+1;i<=r;i++)
                    {
                        if(M[i][b]!=0)
                        {
                            k=0;
                            goto cancel;
                        }
                        else
                        {
                           k=1;
                        }
                       
                    }
                    
                    break;

                    
                }
                else if(M[a][b]==0)
                {
                    for(int i=a+1;i<=r;i++)
                    {
                        if(M[i][b]!=0)
                        {
                            k=0;
                           
                        }
                        if(M[i][b]==0)
                        {
                           k=1;
                        }                       
                    }
                } 
                  
        }
        
        
    }
    cancel:
    {
         if(k==1)
    {
        cout<<"yes, it is echelon form";
    }
    if(k==0)
    {
        cout<<"no, it is not echelon";
    }
    
    }
    
   
    
     
    
       

    

}
