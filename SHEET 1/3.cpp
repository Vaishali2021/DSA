#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=i;j>0;j--)
        {
            cout<<" ";
        }
        for(k=n-i;k>0;k--)
        {
            cout<<"*";
        }
      cout<<endl;
    }
 return 0;
}   