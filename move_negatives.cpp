//dutch national flag algo
#include<iostream>
using namespace std;
void moveNeg(int a[],int n){
  int x=0;
  int y=n-1;
  while(x<y){
    if(a[x]<0){
      x++;
    }
    else if(a[y]>0){
      y--;
    }
    else {
      swap(a[x],a[y]);
    }
  }
}
int main(){
  int a[]={1,2,5,-3,-7,6,2,4,-4};
  int n=sizeof(a)/sizeof(int);
  moveNeg(a,9);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  

}
