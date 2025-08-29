 #include<iostream>
 #include<stack>
using namespace std;
class Solution
{
  public:
  bool isValid(string str){
    stack<char> st;
    for(int i=0;i<str.size();i++){
      if (str[i]=='('||str[i]=='['||str[i]=='{'){
        st.push(str[i]);
      }
      else{
        if(st.empty()){
          return false;
        }
        if(st.top()=='(' && str[i]==')' ||
          st.top()=='{' && str[i]=='}'||
          st.top()=='[' && str[i]==']'){
            st.pop();
          }
          else{
            return false;
          }
      }
    }
    return st.empty();
  }
};
int main(){
  string str="[()]";
  Solution ob;
  if(ob.isValid(str))
  {
    cout<<"valid";
  }
  else{
    cout<<"not valid";
  }
  return 0;
  
}


