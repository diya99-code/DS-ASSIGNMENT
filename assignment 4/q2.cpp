#include<iostream>
using namespace std;
class circular_queue{
  int *arr;
  int front,rear;
  int count;
  int capacity;
  
  public:
  circular_queue(int n){
    capacity=n;
    count=0;
    arr= new int[n];
    front=0;
    rear=-1;
  }
  bool isEmpty(){
    return (count==0);
  }
  bool isFull(){
    return (count==capacity);
  }
  int enqueue(int e){
    if(isFull()){
      cout<<"element can't be inserted"<<endl;
    }
    else{
      rear=(rear+1)%capacity;
      arr[rear]=e;
      count++;
      cout << e << " inserted" << endl;
    }
  }
  int dequeue(){
    if(isEmpty()){
      cout<<"Queuee is empty"<<endl;
    }
    else if(front==rear){
      front=rear=-1;
    }
    else{cout << arr[front] << " removed" << endl;
    front=(front+1)%capacity;
    count--;
  }
}
void display(void){
  while(front!=rear){
    cout<<arr[front]<<" ";
    front=(front+1)%capacity;
  }
  cout<<arr[rear];
}
  
};
int main(){
  circular_queue ob(5);
  ob.enqueue(4);
  ob.enqueue(5);
  ob.enqueue(9);
  ob.enqueue(2);
  ob.enqueue(3);
 // ob.dequeue();
  //ob.dequeue();
  ob.enqueue(6);
  ob.display();

}