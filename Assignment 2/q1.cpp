#include<iostream>
using namespace std;
int main(){
  int n,mid;
  int S;
  int A[5]={8,9,20,67,90};
  int l=0;
  int u=4;
  
  cout<<"enter the element to be searched";
  cin>>S;
  while(l<=u){
    mid=(u+l)/2;
    if(S<A[mid]){
      u=mid-1;
      
    }
    if(S>A[mid]){
      l=mid+1;
      
    }
    if(S==A[mid]){
      cout<<"element is found at"<<mid;
      break;
    }
  }


}