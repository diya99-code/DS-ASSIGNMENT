#include<iostream>
using namespace std;
#include<stack>
#include<cmath>
#include<cctype>
int postfixeval(string s){
  stack<int> st;
  for (int i=0;i<s.length();i++){
  if(s[i]==' '){
    continue;
  }

  
  if(isdigit(s[i])){
   int num=0;
   while(i<s.length() && isdigit(s[i])){
    num=num*10+ (s[i]-'0');
    i++;
    }
    st.push(num);
    i--;}
   
   

    
     if((s[i]=='^' ||s[i]=='+'|| s[i]=='-' || s[i]== '*' || s[i]=='/')) {
     int val1 = st.top(); st.pop();
            int val2 = st.top(); st.pop();
            
            switch(s[i]) {
                case '+': st.push(val2 + val1); break;
                case '-': st.push(val2 - val1); break;
                case '*': st.push(val2 * val1); break;
                case '/': st.push(val2 / val1); break;
                case '^': st.push(pow(val2,val1)); break;
  }
}
else{
  st.push(s[i]);
}

}
return st.top();
}
int main() {
    string exp = "12 3 4 * + 2 -";   
    cout << "Result = " << postfixeval(exp) << endl;
    return 0;
} 