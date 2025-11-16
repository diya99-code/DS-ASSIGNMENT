#include<iostream>
using namespace std;
#include<stack>
int main(){
  stack<int> st;
  int res[5];
  int a[5]={4,5,2,10,8};
  int i;
  for(i=0;i<5;i++){
    while(!st.empty() && a[i]<st.top()){
          st.pop();
        }
    if(st.empty()){
      res[i]=-1;
      st.push(a[i]);
    }
    
      if(!st.empty() && a[i]>st.top()){
        res[i]=st.top();
        st.push(a[i]);
      }
      
        
       
      }
    
  
  for(i=0;i<5;i++){
    cout<<res[i]<<endl;
  }
}
