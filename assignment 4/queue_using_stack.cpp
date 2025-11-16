#include<iostream>
#include<stack>
using namespace std;
stack<int> input;
stack<int> output;
void push(int n){
  input.push(n);
}
void pop(){
  if(output.empty()){
    while(!input.empty()){
      output.push(input.top());
      input.pop();
    }
    
  }
  if(!output.empty()){
    output.pop();
  }
}
int top(){
  if(output.empty()){
    while(!input.empty()){
      output.push(input.top());
      input.pop();
    }
   
  }
  if(!output.empty()){
    return output.top();
  }
}
int main(){
  push(4);
  push(3);
  push(2);
  cout<<top()<<" ";
  pop();
  cout<<top();
}
