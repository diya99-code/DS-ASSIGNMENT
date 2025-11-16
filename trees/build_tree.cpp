#include<iostream>

#include<queue>
using namespace std;
class Node{
  public:
  int data;
  Node *leftptr;
  Node *rightptr;
  Node(int x){
    this->data=x;
    this->leftptr=NULL;
    this->rightptr=NULL;
  }

};
Node* build_trees(Node *root){
  cout<<"enter the data"<<endl;
  int x;
  cin>>x;
  
  if(x==-1){
    return NULL;
  }
  root=new Node(x);
  cout<<"enter the data to insert in left of"<<x<<endl;
  root->leftptr=build_trees(root->leftptr);
  cout<<"enter the data to insert in right of"<<x<<endl;
  root->rightptr=build_trees(root->rightptr);
  return root;
}

void levelOrder(Node *root){
  queue<Node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    Node *temp=q.front();
    q.pop();
    if(temp==NULL){
      cout<<endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout<<temp->data<<" ";
      if(temp->leftptr){
        q.push(temp->leftptr);
      }
      if(temp->rightptr){
        q.push(temp->rightptr);
      }
    }
  }
}
Node *search_bst(Node *root, int value){
  while(root!=NULL && root->data!=value){
    root=value<root->data?root->leftptr:root->rightptr;
  }
  return root;
}
Node * insertion_bst(Node * root,int val){
  
  if(root==NULL)
  {
    root=new Node(val);
    return root;
  }
  
  
   Node *curr=root;
   while(true){
   if(val<curr->data){
  
   if(curr->leftptr==NULL){
     curr->leftptr=new Node(val);
     cout<<"node with data"<<val<<"is inserted"<<endl;
     break;
   }
   else{
    curr=curr->leftptr;
   }

  }
  else{
  if(curr->rightptr==NULL){
     curr->rightptr=new Node(val);
     cout<<"node with data"<<val<<"is inserted"<<endl;
     break;
  }
  else{
    curr=curr->rightptr;
  }
  }
  }

  
 
 
 return root;

}
// Node* insertion_bst(Node* root, int val) {
//     if (root == NULL) {
//         root = new Node(val);
//         cout << "Node with data " << val << " is inserted as root" << endl;
//         return root;
//     }

//     Node* curr = root;
//     while (true) {
//         if (val < curr->data) {
//             if (curr->leftptr == NULL) {
//                 curr->leftptr = new Node(val);
//                 cout << "Node with data " << val << " is inserted to LEFT of " << curr->data << endl;
//                 break;
//             } else {
//                 curr = curr->leftptr;
//             }
//         } else {
//             if (curr->rightptr == NULL) {
//                 curr->rightptr = new Node(val);
//                 cout << "Node with data " << val << " is inserted to RIGHT of " << curr->data << endl;
//                 break;
//             } else {
//                 curr = curr->rightptr;
//             }
//         }
//     }

//     return root;
// }
int widthOfBinaryTree(Node* root) {
        if(!root){
            return 0;
        }
        int ans=0;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        int last,first;
        
        while(!q.empty()){
            int size=q.size();
            int mmin=q.front().second;
            
           
            for(int i=0;i<size;i++){
                int curr_id=q.front().second-mmin;
                 Node* node=q.front().first;
                  q.pop();
              if(i==0){
                 first=curr_id;
            }
            if(i==size-1){
                 last=curr_id;
            }
            if(node->leftptr){
                q.push({node->leftptr,2*curr_id+1});
            }
            if(node->rightptr){
                q.push({node->rightptr,2*curr_id+2});
            }
           

        }
         ans=max(ans,(last-first)+1);
            }
           
        return ans;
    }

int main(){
  Node *root=NULL;
  //root=build_trees(root);
  // levelOrder(root);
  //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
  // root=insertion_bst(root,5);
  // root=insertion_bst(root,1);
  // root=insertion_bst(root,4);
  // root=insertion_bst(root,7);
  // root=insertion_bst(root,8);
  // root=insertion_bst(root,3);
  root=build_trees(root);
  levelOrder(root);
  cout<<widthOfBinaryTree(root);


}