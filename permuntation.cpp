#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int nPr(int n,int r)
{
    int ans=(factorial(n))/(factorial(n-r));
    return ans;
}
int main()
{
    int n,r;
    cin>> n >> r;
    cout<<"the combiantion is:"<< nPr(n,r)<<endl;
}
