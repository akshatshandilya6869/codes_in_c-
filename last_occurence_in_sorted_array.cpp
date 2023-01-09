#include<iostream>
using namespace std;
int lastOccurence(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(key==arr[mid])
        {ans=mid;
        s=mid+1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;}
        
        mid=s+(e-s)/2;


        }
        return ans;

    }
int main()
{
    int even[6]={1,3,3,3,3,6};
    int index=lastOccurence(even,6,3);
    cout<< "last occurence of 3 is at index " << index <<endl;}
