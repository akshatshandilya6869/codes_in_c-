#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int start =0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
    start++;
    end--;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
int main()
{
    int arr[5]={1,4,7,-4,3};
    int brr[6]={2,5,9,5,8,9};
     
     reverse(arr,5);
     reverse(brr,6);
     
     print(arr,5);
     print(brr,6);
}
