#include<iostream>
using namespace std;

class Node{
  
  public:
  char data;
  Node *next;
  Node *prev;
  Node(char value){
    this-> data=value;
  this -> next=NULL;
  this -> prev =NULL;
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
void print(Node *head){
  Node *temp=head;
  while(temp!=NULL){
  cout<<temp->data<<" ";
  temp=temp->next;
  }
  cout<<endl;
}
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
// void insertion_at_tail(Node* &head,Node* &tail,int d){
//   if(tail==NULL){
//     Node *newnode=new Node(d);
//     tail=newnode;
//     head=newnode;
//   }
//   else{
//     Node *newnode=new Node(d);
//     tail->next=newnode;
//     newnode->prev=tail;
//     tail=newnode;
//   }
// }
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
void InsertionAtPosition(Node* &head,Node* &tail,int position,int d){
  
  Node *temp=head;
   if(position==1){
      Node* newnode=new Node(d);
      newnode->next=head;
      head->prev=newnode;
      head=newnode;
   }
  
   else{
    int cnt=1;
    Node *temp=head;
    while(cnt<position){
      temp=temp->next;
      cnt++;
    }
    if(temp->next==NULL){
      insertion_at_tail(head,tail,d);
      return;
    }
     Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
   }

  
  }
  void delete_node(int position,Node* &head){
    
    if(position==1){
      Node* temp=head;
      temp->next->prev=NULL;
      head=temp->next;
      temp->next=NULL;
    }
    else{
    Node*curr=head;
    Node* Prev=NULL;
    int cnt=1;
    while(cnt<position){
      Prev=curr;
      curr=curr->next;
      cnt++;
    }
    curr->prev=NULL;
    Prev->next=curr->next;
    curr->next->prev=Prev;
    curr->next=NULL;
    delete curr;
      
    }
  }
  void character_insertion(Node* &head,Node* &tail,string &str){
    for(int i=0;i<str.length();i++){
      char c=str[i];
      insertion_at_tail(head,tail,c);
    }
  }
  bool isPalindrome(Node *head,Node *tail){
    Node *front=head;
    Node* back=tail;
    while(front!=back && front->prev!=back){
      if(front->data==back->data){
        front=front->next;
        back=back->prev;
      }
      else{
        return false;
        break;
      }
    }
    return true;
    
  }

  

  int main(){
    Node *head=NULL;
    Node *tail=NULL;
    
    insertion_at_head(head,tail,1);
    print(head);

    insertion_at_head(head,tail,2);
    print(head);

    insertion_at_head(head,tail,3);
    print(head);


    insertion_at_head(head,tail,4);
    print(head);

    // insertion_at_tail(head,tail,4);
    // print(head);

    InsertionAtPosition(head,tail,5,3);
    print(head);
     
    // delete_node(5,head);
    // print(head);
    // string str;
    // cout<<"enter the string you want to check"<<endl;
    // cin>>str;
    // character_insertion(head,tail,str);
    // print(head);
    // cout<<isPalindrome(head,tail)<<endl;
    


  }