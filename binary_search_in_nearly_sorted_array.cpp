#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>arr ,int target){
int s=0;
int e=arr.size()-1;
int mid=s+(e-s)/2;
while(s<=e){
  if(arr[mid]==target)
    return mid;
  else if(arr[mid+1]==target)
    return mid+1;
  else
    return mid-1;
  if(arr[mid]>target){
    e=mid-2;
  }
  if(arr[mid]<target){
    s=mid+2;
  }
  s+(e-s)/2;
}
return -1;
}
int main(){
  vector<int>v {1,3,2,5,4,6,7};
  int target=5;
  int ans=binarySearch(v,target);
  cout<< "target is at :" <<ans<<endl;
  return 0;
}

