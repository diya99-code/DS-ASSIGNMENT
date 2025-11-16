#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
   Node(int n){
    this->data=n;
    this->next=NULL;
   }
   ~Node(){
    int value=this->data;
    if(this->next!=NULL){
      delete next;
      this->next=NULL;
    }
    cout<<"memory freed for node with value"<<value<<endl;
   }
};
void insert_node(Node* &tail,int element, int d){
  if(tail==NULL){
    Node *newnode=new Node(d);
    tail=newnode;
    tail->next=tail;
    }
    else{
      Node *temp=new Node(d);
       Node *curr=tail;
       while(curr->data!=element){
        curr=curr->next;
       }
       temp->next=curr->next;
       curr->next=temp;

    }
  }
    void size(Node *tail){
      int cnt=1;
      Node *temp=tail->next;
      while(temp!=tail){
        temp=temp->next;
        cnt++;
      }
      cout<<"size of the linked list is "<<cnt;

    }
    void print(Node *tail){
      if (tail==NULL){
        cout<<"LIST is empty"<<endl;}
        else{
          Node *temp=tail->next;
          cout<<tail->data<<" ";
          while(temp!=tail){
            cout<<temp->data<<" ";
            temp=temp->next;
          }
          cout<<endl;
          //cout<<tail->data;
        }

      }
      bool isCircular(Node *temp){

      }
      void half(Node*tail){
        Node *pet=tail;
        Node *curr=tail;
        int cnt=1;
        while(pet->next!=tail){
          cnt++;
          pet=pet->next;
        }
        if((cnt%2)!=0){

        
        int i=1;
        while( i<=cnt/2){
          curr=curr->next;
          i++;
        }
      }
      else{
        int i=1;
        while(i<cnt/2){
          curr=curr->next;
          i++;
        }
      }
        Node*temp=curr->next;
        curr->next=tail;
        pet->next=temp;
        Node *tail2=temp;
        print(tail);
        print(tail2);
      }
    


int main(){
  
  Node *tail=NULL;
  
  insert_node(tail,5,3);
  insert_node(tail,3,4);

  
   insert_node(tail,4,5);
  insert_node(tail,5,6);
  insert_node(tail,6,2);
  insert_node(tail,2,1);
  //insert_node(tail,1,9);

  print(tail);
  half(tail);
  //print(tail);
}