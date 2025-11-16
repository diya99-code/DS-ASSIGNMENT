#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*left;
  Node *right;
  Node *up;
  Node *down;
  Node(int d){
    data=d;
  left=NULL;
  right=NULL;
  up=NULL;
  down=NULL;
  }
};
  void print(Node *head){
    Node *downptr=head;
    while(downptr){
      Node*rightptr=downptr;
      while(rightptr){
        cout<<rightptr->data<<" ";
        rightptr=rightptr->right;
      }
      cout<<"\n";
      downptr=downptr->down;
    }
    cout<<head->data<<endl;
    //cout<<node[0][0]->down<<endl;
  }
  int main(){
     int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     int n=3;
     int m=3;
     int i;
     int j;
     Node *nodes[n][m];
     
     for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         nodes[i][j]=new Node(matrix[i][j]);
      }
     }
     Node *head=nodes[0][0];
     for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        if(j<m-1){
          nodes[i][j]->right=nodes[i][j+1];
        }
         if(i<n-1){
          nodes[i][j]->down=nodes[i+1][j];
        }
         if(i>0 && i<n){
          nodes[i][j]->up=nodes[i-1][j];
        }
        if (j>0 && j<m){
          nodes[i][j]->left=nodes[i][j-1];
        }
      }
     }
     print(head);
     cout<<nodes[0][0]->down->data;

     

  }

