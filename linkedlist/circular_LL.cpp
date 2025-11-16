#include<iostream>
using namespace std;
class Node{
  public:

  int data;
  Node * next;
  Node(int n){
    this->data=n;
    this->next=NULL;
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
void Insertion(Node * &tail,int element,int d){

  if (tail==NULL){
    Node *newnode=new Node(d);
    tail=newnode;
    tail->next=tail;
  }
  else{
    // list is not empty
     Node *curr=tail;
     while(curr->data!=element){
      curr=curr->next;
     }
    Node *temp=new Node(d);
    temp->next=curr->next;
    curr->next=temp;
   
  }
}
 void print(Node *tail){
  Node *temp=tail;
  if(tail==NULL){
    cout<<"linked list is empty";
  }
  do{
    cout<<temp->data<<" ";
    temp=temp->next;

  }while(temp!=tail);
  cout<<endl;
 }





 void deletenode(Node* &tail,int value){
 
   if (tail==NULL){
    cout<<"list is empty"<<endl;
   }
   else{
    Node *prev=tail;
  Node*curr=prev->next;
   while(curr->data!=value){
    prev=curr;
    curr=curr->next;
   }
   prev->next=curr->next;

   
   if(prev==curr){
    tail=NULL;
   }
   if(tail==curr){
    tail=prev;
   }

   curr->next=NULL;
   delete curr;
  }
}
 int main(){
  Node *tail=NULL;
  Insertion(tail,5,3);
  print(tail);

   Insertion(tail,3,4);
   print(tail);

   Insertion(tail,4,5);
   print(tail);

   Insertion(tail,5,6);
   print(tail);

   Insertion(tail,6,7);
   print(tail);

   Insertion(tail,7,8);
   print(tail);
  
 cout<<tail->data;
 deletenode(tail,8);
 print(tail);
 deletenode(tail,5);
 print(tail);
 }