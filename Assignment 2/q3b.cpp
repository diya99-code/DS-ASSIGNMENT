#include<iostream>
using namespace std;
int main(){
  int mid;
  int l,u;
  l=0;
  
  int A[]={1,2,4,5,6};
  int n=6;
  u=n-2;
  while(l<=u)
  {
    mid=(u+l)/2;
    if(A[mid]!=mid+1)
    {
      u=mid-1;
    }
    if(A[mid]==mid+1)
    {
      l=mid+1;
    }
  }
  cout<<"the missing element is "<<l+1<<endl;


}