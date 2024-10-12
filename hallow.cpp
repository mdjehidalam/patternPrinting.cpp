#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cout<<"Enter the NO : "<<flush; 
    cin>>n; 
    int m;
    cin>>m; 
    cout<<endl; 
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++){
            if(i==0 || i==n || j==0 || j==m)
            {
                cout<<'*';
            }else cout<<"-";
        }
        cout<<endl; 
    }
}
