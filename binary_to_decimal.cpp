#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int s=0;
    while(n!=0)
    {
        int d=n%10;
        if(d==1){
            s=s+pow(2,i);
        }
        
        
            
        
        n=n/10;
        i++;
    }
cout<<s<<endl;
}
