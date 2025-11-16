#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
  int n;
  int i;
  
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
  vector<int> b;
  
  for (int i=0;i<n;i++){
    if(st.empty()){
      st.push(a[i]);
    }
    if(!st.empty() && a[i]>st.top()){
      
      b.push_back(st.top());
      
      
      st.pop();
      st.push(a[i]);
    }
    if(!st.empty() && a[i]<st.top()){
      st.push(a[i]);
    }
   
  }
  while(!st.empty()){
      b.push_back(st.top());
      st.pop();
     
    }
  for(i=0;i<=n-2;i++){
    if(st.empty()){
      st.push(a[0]);
    }
    for(i=0;i<n-1;i++){
      a[i]=a[i+1];
    }
    n--;
    if(!st.empty() && a[0]>st.top()){
      b.push_back(st.top());
      st.pop();
    }
    if(!st.empty() && a[0]<st.top()){
      st.push(a[0]);
    }

  }
  while(!st.empty()){
      b.push_back(st.top());
      st.pop();
     
    }
    cout<<"B is"<<endl;
    for(i=0;i<n;i++){
      cout<<b[i]<<endl;
    }
}