#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
  Node(int d){
    data=d;
    next=NULL;
  }
};

void insertion_at_tail(Node *&tail,Node *&head,int d ){
  if(tail==NULL){
    Node *temp=new Node(d);
    tail=temp;
    head=temp;
  }
  else{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
  }
}
  void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;
  }
  Node* find_intersected_node(Node *head1,Node *head2,int difference){
    while(difference){
      head1=head1->next;
      difference--;
    }
    while(head1!=NULL && head2!=NULL){
      if(head1==head2){
        return head1;
      }
      head1=head1->next;
      head2=head2->next;
    }
  }
  Node *get_intersected_node(Node *head1, Node*head2){
    Node * firstcurrnode=head1;
    Node *secondcurrnode=head2;
    int cnt1=1;
    int cnt2=1;
    while(firstcurrnode!=NULL){
      firstcurrnode=firstcurrnode->next;
      cnt1++;
    }
    while(secondcurrnode!=NULL){
      secondcurrnode=secondcurrnode->next;
      cnt2++;
    }
    if(cnt1>cnt2){
      find_intersected_node(head1,head2,cnt1-cnt2);
    }
    if(cnt2>cnt1){
      find_intersected_node(head2,head1,cnt2-cnt1);
    }

  }
  int main(){
    Node *head1=NULL;
    Node *tail1=NULL;
    Node *head2=NULL;
    Node *tail2=NULL;

    Node *common=new Node(8);
    common->next=new Node(5);

    insertion_at_tail(head1,tail1,4);
  tail1->next=new Node(1);
  tail1->next->next=common;
  tail1=common->next;
  print(head1);



  insertion_at_tail(head2,tail2,5);
  tail2->next=new Node (6);
  tail2->next->next=new Node(1);
  tail2->next->next->next=common;
  print(head2);
  cout<<get_intersected_node(head1,head2)->data;
  }

