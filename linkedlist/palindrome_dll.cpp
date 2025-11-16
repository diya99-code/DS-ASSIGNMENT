#include<iiostream>
using namespace std;
class Node{
  public:
  int data;
  Node *prev;
  Node *next;
  Node(int val){
    this->data=val;
    this->prev=NULL;
    this->next=NULL;
}
};
   void insertion_at_head(Node* &head,Node* &tail,int d){
  if(head==NULL){
    Node *newnode=new Node(d);
    head=newnode;
    tail=newnode;
  }
  else{
Node *newnode=new Node(d);
  newnode->next=head;
  head->prev=newnode;
  head=newnode;
  }
  }
  void insertion_at_tail(Node* &head,Node* &tail,char d){
  if(tail==NULL){
    Node *newnode=new Node(d);
    tail=newnode;
    head=newnode;
  }
  else{
    Node *newnode=new Node(d);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
  }
}


