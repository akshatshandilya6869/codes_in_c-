#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
   int  ans=0;
    while(s<=e)
    {
        if(key==arr[mid])
        {
           ans=mid;
           e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1
        }
        mid=s+(e-s)/2;
   }return mid; 
}
int main()
{
    int even[5]={3,3,6,5,7};
    cout<<"first occurence of 3 is at index"<<firstOccurence(even,5,3)<<endl;
    return 0;
    
}
