// implementing stack using two queues
#include<iostream>
#include<queue>
using namespace std;
class stack_queue{
  queue<int> q1;
  queue<int> q2;
  public:
    void sq( int n){
  
  q2.push(n);
  while(!q1.empty()){
    q2.push(q1.front());
    q1.pop();
  }
  while(!q2.empty()){
    q1.push(q2.front());
     q2.pop();
    
  }
}
// if(q2.empty()){
//   q2.push(n);
// }
// else{
//   while(!q2.empty()){
//     q1.push(q2.front());
//     q2.pop();
//   }
//   q2.push(n);
// }
// while(!q1.empty()){
//   q2.push(q1.front());
//   q1.pop();
// }
//     }
void qpop(void){
  cout<<q1.front()<<endl;
  q1.pop();
}


};

int main(){
  stack_queue ob;
  ob.sq(4);
  ob.sq(3);
  ob.sq(2);
  ob.sq(1);
  
ob.qpop();
ob.qpop();
ob.qpop();
ob.qpop();
  

}