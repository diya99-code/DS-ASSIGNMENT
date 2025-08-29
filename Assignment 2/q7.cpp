#include<iostream>
using namespace std;
int main(){
  int count=0;
  int i,j;
  int arr[]={4,6,3,2,5,1};
  int n=6;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        count++;
      }
    }
  }
  cout<<"inverted pairs are"<<count<<"in number";
}