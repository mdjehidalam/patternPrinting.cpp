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
        for(int j=0; j<n-i; j++)
        {
            cout<<"*"; 
        }
        cout<<endl; 
    }
}
