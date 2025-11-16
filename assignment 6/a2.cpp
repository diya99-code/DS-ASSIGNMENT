#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*prev;
  Node*next;
  Node(int d){
    data=d;
    prev=NULL;
    next=NULL;
  }
  
    ~Node(){
   int value= this->data;
   if(this->next!=NULL){
    delete next;
    next=NULL;
   }
   cout<<"memory for node with value"<<value<<"is freed"<<endl;
  }
  
};
  int countones(int n){
    int cnt=0;
    while(n){
      cnt+=(n&1);
      n>>=1;
    }
    return cnt;
  }
  void deletenode(int n, Node *&head){
    Node*temp=head;
    Node*Prev=NULL;
    int cnt=1;
    while(temp->data!=n){
      Prev=temp;
      temp=temp->next;
      cnt++;
    }
    if(cnt==1){
      head=head->next;
      
      temp->next->prev=NULL;
      temp->next=NULL;
      delete temp;
    }

    else{
      Prev->next=temp->next;
    temp->next->prev=Prev;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;
    }

  }
  void insertion_at_tail(Node *&head,Node*&tail,int d){
    if(tail==NULL){
      Node *temp=new Node(d);
      head=temp;
      tail=temp;
    }
      else{
        Node *temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
      }
    }
  
  void print(Node *head){
    Node* temp=head;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;
  }
  int main(){
    Node *head=NULL;
    Node *tail=NULL;
    insertion_at_tail(head,tail,9);
    print(head);

    insertion_at_tail(head,tail,11);
    print(head);

    insertion_at_tail(head,tail,34);
    print(head);

    insertion_at_tail(head,tail,6);
    print(head);

    insertion_at_tail(head,tail,13);
    print(head);

    insertion_at_tail(head,tail,21);
    print(head);

    
     Node *temp=head;
     while(temp!=NULL){
      if(countones(temp->data)%2==0){
        
        Node *curr=temp;
        temp=temp->next;
        deletenode(curr->data,head);
      }
      else{
        temp=temp->next;
      }
      
     }
     print(head);

  }


