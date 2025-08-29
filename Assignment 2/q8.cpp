#include<iostream>
using namespace std;
int main(){
  int n,i;
  

  cout<<"enter the no. of elements you want to enter";
  cin>>n;
  int arr[n];
  cout<<"enter the elements";
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  int count=n;
  int j;
  
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        count--;
        break;
      }
    }
  }
  cout<<"distinct elements are"<<count<<"in number";
}