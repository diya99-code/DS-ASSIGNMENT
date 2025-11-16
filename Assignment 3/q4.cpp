#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prec(char c){
  if(c=='^')
  {
    return 3;
  }
  if(c == '*'|| c=='/')
  {
    return 2;
  }
  if(c == '+'|| c=='-')
  {
    return 1;
  } 
  return -1;
}
string infixtopostfix(string s){
  stack<char> st;
  string res;
  for(int i=0;i<s.length();i++){
    if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<= 'Z')){
    res+=s[i];
  }
    else if(s[i]=='(')
    {
      st.push(s[i]);
    }
    else if (s[i]==')'){
      while(!st.empty()&& st.top()!='('){
        res+=st.top();
        st.pop();
    }
    st.pop();
    }
    else{
            while(!st.empty() && 
                  ((prec(st.top()) > prec(s[i])) || 
                  (prec(st.top()) == prec(s[i]) && s[i] != '^'))){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    
  }
  while(!st.empty()){
    res+=st.top();
    st.pop();
  }
  return res;
}
int main(){
  cout<<infixtopostfix("A+B*(C^D-E)^F+G*H-I");
  return 0;
}
