#include<iostream>
using namespace std;



  struct sparse{
    int row;
    int col;
    int val;
  };
  class sparsematrix{
    int rows ,cols, nonzero_num;
    sparse *Elements;
    sparse *Elements2;
    public:
    sparsematrix(int r,int c, int num){
      rows=r;
      cols=c;
      
      
      nonzero_num=num;
      Elements2= new sparse[nonzero_num];
      Elements= new sparse[nonzero_num];
    }
    ~sparsematrix(){
      delete[] Elements;
    }
  
  void read() {
    
    cout<<"enter first sparse matrix "<<endl;
    for(int i=0;i<nonzero_num;i++){
      cin>>Elements[i].row>>Elements[i].col>>Elements[i].val;
    }
    cout<<"enter the second sparse matrix"<<endl;
    for(int i=0;i<nonzero_num;i++){
      cin>>Elements2[i].row>>Element2s[i].col>>Elements2[i].val;
    }
  
}
  // void display() {
  //   cout<<"FULL MATRIX"<<endl;
  //   int n;
  //   int k=0;
  //   for(int i=0;i<rows;i++){
  //     for(int j=0;j<cols;j++){
  //       if(k<nonzero_num && Elements[k].row==i && Elements[k].col==j){
  //         cout<<Elements[k++].val<<" ";
  //       }
  //       else{
  //         cout<<"0"<<" ";
  //       }
  //     }
  //     cout<<endl;
  //   };
  // }
  void transpose(){
    sparse *Transpose;
    Transpose=new sparse[nonzero_num];
    for(int i=0;i<nonzero_num;i++){
      Transpose[i].row=Elements[i].col;
      Transpose[i].col=Elements[i].row;
      Transpose[i].val=Elements[i].val;
      cout<<"transpose matrix is "<<endl;
      cout<<Transpose[i].row<<" "<<Transpose[i].col<<" "<<Transpose[i].val<<endl;
    }
    
  }
};
  int main(){
    int r=4;int c=4; int nonzero_num=5;
    sparsematrix sm(  r,  c, nonzero_num);
    sm.read();
    sm.transpose();
  }

  //sparse sp;
  //cout<<"enter the elements";
  //for(i=0;i<3;i++){
    //for(j=0;j<3;j++){
      //cin>>a[i][j];
  //   }
  // }
  //for(i=0;i<3;i++){
  //  for(j=0;j<3;j++){
  //    if (a[i][j]!=0){
  //     sp.row=i;
  //   sp.col=j;
  //   sp.val=a[i][j];
  //   cout<<sp.row<<sp.col<<sp.val;
  //    }
  //    cout<<endl;
  // }
  // }
  

