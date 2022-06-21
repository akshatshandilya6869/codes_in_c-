#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of rows";
    cin>>n;
  char ch='A';
    for(int i=1;i<=n;i++)
   {ch='A'+n-i;
        for (int j=1;j<=i;j++)
        {
          
           cout<<ch;
ch++;
           
        }
                 

    cout<<endl;
    }
}
//output if input 4

D
CD
BCD
ABCD

