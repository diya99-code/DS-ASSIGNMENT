#include<iostream>

using namespace std;


class Node{
  
  public:
  int data;
  Node *next;
  Node *prev;
  Node(int value){
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
  void insertion_at_tail(Node* &head,Node* &tail,int d){
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
void reverse(Node *head,Node*tail){
  Node *f1=head;
  Node *f2=tail;
  while(f2!=f1 &&  f1->prev!=f2){
int buffer;
  buffer=f2->data;
  f2->data=f1->data;
  f1->data=buffer;
  f1=f1->next;
  f2=f2->prev;
  }
  
}
void reverse_by_k(Node *head,int k){
  Node *temp=head;
  Node *curr=head;
  int cnt=1;
  while(curr->next!=NULL){
    if(cnt%k==0){
     reverse(temp,curr);
     curr=curr->next;
     temp=curr;
     cnt++;
    }
    else{
      curr=curr->next;
      cnt++;
    }
  }
  
    
    reverse(temp,curr);
  
}


//  void reverse_by_k(Node *head, int k) {
//     if (head == NULL || k <= 1) return;

//     Node *start = head;
//     Node *end = head;
//     int count = 1;

//     while (end != NULL) {
//         // Move `end` to the end of this group
//         while (count < k && end->next != NULL) {
//             end = end->next;
//             count++;
//         }

//         // Reverse this group
//         reverse(start, end);

//         // Move to next group
//         start = end->next;
//         end = start;
//         count = 1;
//     }
// }




int main(){
  Node* head=NULL;
  Node *tail=NULL;
  insertion_at_head(head,tail,1);
  print(head);

  insertion_at_head(head,tail,2);
  print(head);

  insertion_at_head(head,tail,3);
  print(head);

   insertion_at_head(head,tail,4);
  print(head);

  insertion_at_head(head,tail,5);
  print(head);

  insertion_at_head(head,tail,6);
  print(head);

  // insertion_at_head(head,tail,7);
  // print(head);

  // insertion_at_head(head,tail,8);
  // print(head);

  reverse_by_k(head,3);
  print(head);



}