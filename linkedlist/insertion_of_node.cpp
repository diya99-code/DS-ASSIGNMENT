#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
  Node(int data){
    this->data=data;
    this->next=NULL;
  }
  ~Node(){
    int value=this->data;
    if(this->next!=NULL){
      delete next;
      this->next=NULL;
    }
    cout<<"memory freed for node with data"<<value<<endl;
  }
};

  void InsertionAtNode(Node* &node,int n){
    Node* temp=new Node(n);
    node->next=temp;
    node=temp;
  }
  void print(Node * &head){
    Node *temp=head;
    //int k=0;
    //cout<<temp->data<<" ";
    while(temp!=NULL){
      // while( k<3){
      //   temp=temp->next;
      //   k++;
      // }
      // k=0;
      cout<<temp->data<<" ";
      temp=temp->next;
      
    }
    cout<<endl;
  }
  void InsertionAtPosition(Node* head,int position,int n){
    Node *temp=head;
    int cnt=1;
    Node *node_to_insert=new Node(n);
    while(cnt<position-1){
      temp=temp->next;
      cnt++;
      }
      node_to_insert->next=temp->next;
      temp->next=node_to_insert;
  }
  void delete_node(int position, Node* &head){
    if(position==1){
      Node* temp=head;
      head=head->next;
      temp->next=NULL;
      delete temp;
    }
    else{
      Node *curr=head;
      Node *prev=NULL;
       int cnt=1;
      while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
      }
      prev->next=curr->next;
      curr->next=NULL;
      delete curr;

    
    
    }

  }
  void count_occurences(int key,Node* &head){
     
     int cnt=0;
     while(head!=NULL && head->data==key){
     
        Node* temp=head;
        head=head->next;
        cnt++;
        temp->next=NULL;
        delete temp;
      }
      Node *temp=head;
      Node *prev=NULL;
      while(temp!=NULL){
        if(temp->data==key){
           Node*pet=temp;
           prev->next=temp->next;
        temp=temp->next;
        
        
        pet->next=NULL;
        delete pet;
        cnt++;
      }
      else{
        prev=temp;
        temp=temp->next;
        
      }
    
     }

     cout<<cnt;
  }
  void middle_element(Node *head){
    
    Node *temp=head;
    int cnt=0;
    while(temp!=NULL){
      temp=temp->next;
      cnt++;
    }
    if((cnt%2)==0){
      cout<<"middle element can't be found"<<endl;
    }
    else{

    
    int i=0;
    Node *curr=head;
    while(i<(cnt/2)){
      curr=curr->next;
      i++;
    }
    cout<<"middle element is "<<curr->data;
  }
  }
  void reverse(Node *&head){
    Node *curr=head;
    int cnt=1;
    while(curr->next!=NULL){
      curr=curr->next;
      cnt++;
    }
    Node *temp=head;
    for(int i=1;i<cnt;i++){
      temp=head;
       head=head->next;
      temp->next=curr->next;
      curr->next=temp;
     

    }

  }

int main(){
  Node *node1=new Node(1);
  Node *head=node1;
  Node *node=node1;
  
  InsertionAtNode(node,2);
  InsertionAtNode(node,3);
  InsertionAtNode(node,4);
 InsertionAtNode(node,5);
 InsertionAtNode(node,6);
 InsertionAtNode(node,7);
  //print(head);
  //InsertionAtPosition(head,2,50);
  //delete_node(3,head);
  print(head);
  //count_occurences(2,head);
  //print(head);
  //middle_element(head);
  reverse(head);
  print(head);


}