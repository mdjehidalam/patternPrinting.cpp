#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n; 
    int m; 
    cout<<"Enter the n: "<<flush;
    cin>>n; 
    for(int i=0; i<n; i++)
    {
         
        for(int j=0; j<n; j++)
        {
             if(i==n/2 || j==n/2)
             {
                cout<<" * ";
             }else
             cout<<"   ";
        }
        cout<<endl; 
    }
}
