#include<math.h>
#include <iostream>

using namespace std;

int main()
{
   int m=21;
   int u;
   int c;
   
   while(m>=1)
   {
       cout<<"total match sticks:"<< m <<endl;
       cout<<"enter ur choice between 1 and 4:";
       cin>>u;
       if(u>4)
       {
           cout<<"invalid choice";
           break;
       }
       c=5-u;
       cout<<"computer picks up matchsticks:"<< c <<endl;
       m=m-u-c;
       
       if(m==1)
       {
           cout<<"u have been defeated by the computer"<<endl;
           break;
           
       }
       
       
   }
return 0;
    
}
