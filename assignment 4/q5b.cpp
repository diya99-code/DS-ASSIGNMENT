#include<iostream>
#include<queue>
using namespace std;
class stack_singlequeue{
  queue<int> q;
  public:
  void ssq(int n){
    if(q.size()<=1){
      q.push(n);
    }
    if(q.size()>1){
      q.push(n);
      for(int i=1;i<q.size();i++){
        q.push(q.front());
        q.pop();
      }
    }
  }
  void pop(){
    cout<<q.front()<<endl;
    q.pop();
  }
};
int main(){
  stack_singlequeue ob;
  ob.ssq(4);
  ob.ssq(8);
  ob.ssq(15);
  ob.ssq(20);
  ob.pop();
  ob.pop();
  ob.pop();
  ob.pop();
}
