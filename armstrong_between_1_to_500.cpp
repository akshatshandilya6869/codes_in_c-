#include<math.h>
#include<iostream>
using namespace std;

int main()  
{
    int n,m,s=0,r,c;
    n=m;
    for(int i=1;i<=500;i++)
    { 
        while(n!=0)
        {
            r=n%10;
            c=pow(r,3);
            s=s+c;
            n=n/10;
        }
        if(s==m)
        cout<<m<<endl;
        r=0;
        c=0;
        s=0;
        n=i+1;
        m=i+1;
        
    }
    return 0;
}
