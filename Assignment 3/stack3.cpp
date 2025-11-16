#include<iostream>
#include<stack>
using namespace std;
int main(){
  int n;
  
  cout<<"enter the no. of elements"<<endl;
  cin>>n;
  int a[n];
  cout<<"enter the elements"<<endl;
  for (int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<"entered array is"<<endl;
  for (int i=0;i<n;i++){
    cout<<a[i]<<endl;
  }
  stack<int> st;
  int res[n];
  for (int i=n-1;i>=0;i--){
  
    
    while(!st.empty() && st.top()<a[i]){
      st.pop();
    }
    if(!st.empty() && st.top()>a[i]){
      res[i]=st.top();
      st.push(a[i]);
      
    }
    
    
  
  if(st.empty()){
    res[i]=-1;
  }
  st.push(a[i]);

}
cout<<"resultant array is"<<endl;
for (int i=0;i<n;i++){
  cout<<res[i]<<endl;
}
}