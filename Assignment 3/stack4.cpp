#include<iostream>
#include<stack>
using namespace std;
int main(){
  int n;
  
  cout<<"enter the no. of elements"<<endl;
  cin>>n;
  int temp[n];
  cout<<"enter the elements"<<endl;
  for (int i=0;i<n;i++){
    cin>>temp[i];
  }
  cout<<"entered array is"<<endl;
  for (int i=0;i<n;i++){
    cout<<temp[i]<<endl;
  }
  stack<int> st;
  int ans[n];
  for(int i=n-1;i>=0;i--){
    while(!st.empty() && temp[i]>temp[st.top()]){
      st.pop();
    }
    if(!st.empty()&& temp[i]<temp[st.top()]){
      ans[i]=st.top()-i;
      
    }
    if(st.empty()){
      ans[i]=0;
    }
    st.push(i);
  }
  cout<<"answer is "<<endl;
  for(int i=0;i<n;i++){
    cout<<ans[i]<<endl;;
  }
}