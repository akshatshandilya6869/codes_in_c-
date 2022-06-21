#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of rows:";
    cin>>n;
    int c=1;
    for(int i=1;i<=n;i++)
    {
        for(int s=n-i;s>=1;s--)
        {
            cout<<" ";
            
        }
        for(int j=1;j<=i;j++)
        {
            cout<< j;
            
        
        }
        for(int j=i-1;j;j--)
        {
            cout<<j;
        }
   cout<<endl; }
}
//output
enter the no of rows:4
   1
  121
 12321
1234321//
