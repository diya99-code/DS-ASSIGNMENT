#include<iostream>
#include<queue>
using namespace std;
void interleave(queue<int> &q){

int n,i;
  n=q.size();
 int  half=n/2;
  queue<int> firsthalfq;
  for(i=0;i<n/2;i++){
    firsthalfq.push(q.front());
    q.pop();
    }
    for(i=0;i<half;i++){
      q.push(firsthalfq.front());
      firsthalfq.pop();
      q.push(q.front());
      q.pop();
      
    }
  }
int main(){
  queue<int> q;
  q.push(4);
  q.push(7);
  q.push(11);
  q.push(20);
  q.push(5);
  q.push(9);
  interleave(q);
  cout<<"new queue is"<<endl;
  while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
  }

  
  


}