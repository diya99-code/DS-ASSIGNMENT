#include<iostream>
using namespace std;
int main(){
  int a[7]={64,34,25,12,22,11,90};
  bool swapped=false;
  int i,j;
  for(i=0;i<6;i++){
    swapped=false;
    for(j=0;j<7-i-1;j++){
      if(a[j]>a[j+1]){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        swapped=true;
      }
    }
    if(swapped=false){
      break;
    }
  }
  cout<<"the new sorted array is";
  for(i=0;i<7;i++){
    cout<<a[i]<<endl;
  }
}