#include<iostream>
using namespace std;

int main()  
{
char c;
int a,A;
cout<<"enter a character";
cin>>c;
a=(c=='a'||c=='e'||c=='i'||'o'||'u');
A=(c=='A'||c=='E'||c=='I'||'O'||'U');
if(a||A)
cout<< c <<"is a vowel";
else
cout<<c<<"is not a vowel";
return 0;
}
