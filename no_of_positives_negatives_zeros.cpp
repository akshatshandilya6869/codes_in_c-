#include<iostream>
using namespace std;

int main()  
{
    int n,p=0,n1=0,z=0;
    char ch;
    do
    {cout<<"enter the numbers:";
    cin>>n;
        if(n>0)
        p++;
        else if(n<0)
        n1++;
        else
        z++;
        cout<<"would u like to continue(y/n):"<<endl;
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    cout<<"no of positives is"<<p<<endl;
    cout<<"no of negatives is"<<n1<<endl;
    cout<<"no of zeros is"<<z<<endl;
    return 0;
}
