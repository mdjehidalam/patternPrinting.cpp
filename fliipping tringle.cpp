#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n; 
    int m; 
    cout<<"Enter the n: "<<flush;
    cin>>n; 
    int a=1; 
    for(int i=0; i<n; i++)
    {
         
        for(int j=0; j<n; j++)
        {
              if(j==n-i)
              {
                for(; j<n; j++)
                {
                    cout<<"*";
                }
              }
               
              else cout<<" ";
        }
         cout<<endl; 
    }
}
