#include<iostream>
using namespace std;
int  main(){
  int i ,j;
  int n;
  cout<<"enter the order of the matrix";
  cin>>n;
  int arr[n][n];
  for (i=0;i<n;i++){
    for(j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  for (i=0;i<n;i++){
    for(j=0;j<n;j++){
      cout<<arr[i][j];
    }
    cout<<endl;
  }
  int *d= new int[3*n-2];
  int k=0;
  for (i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(i==j|| (i-j)==1 || (j-i)==1){
      
        
          d[k++]=arr[i][j];
          
          
        
      }
    }
  }
  for(int c=0;c<k;c++){
    cout<<d[c]<<endl;
  

}
}
