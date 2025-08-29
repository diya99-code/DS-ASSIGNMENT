#include<iostream>
using namespace std;
int main(){
int n,row,col;
cout<<"enter number of non zero element : "<<endl;
cin>>n;
int arr[n][3];
cout<<"now enter the row then col then value for matrix of non zero ele : "<<endl;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j <3; j++)
    {
        int a;
        cin>>a;
        arr[i][j] = a;
    }
}
cout<<"enter number of rows : ";
cin>>row;
cout<<"enter number of cols : ";
cin>>col;
cout<<endl;
int n1,row1,col1;
cout<<"enter number of non zero element for 2 : "<<endl;
cin>>n1;
int brr[n1][3];
cout<<"now enter the row then col then value for matrix of non zero ele : "<<endl;
for (int i = 0; i < n1; i++)
{
    for (int j = 0; j <3; j++)
    {
        int a;
        cin>>a;
        brr[i][j] = a;
    }
}
cout<<"enter number of rows : ";
cin>>row1;
cout<<"enter number of cols : ";
cin>>col1;
int rowf,colf;
if(row1>row) rowf = row1;
else rowf = row;

if(col1>col) colf=col1;
else colf = col;

int farr[n+n1][3];
int a =n;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 3; j++)
    {
  farr[i][j] = arr[i][j];
    }
}
for (int i = 0; i < n1; i++) {
    bool found = false;
    for (int j = 0; j < n; j++) {
        if (brr[i][0] == farr[j][0] && brr[i][1] == farr[j][1]) {
            farr[j][2] += brr[i][2];
            found = true;
            break;
        }
    }
    if (!found) { 
        farr[a][0] = brr[i][0];
        farr[a][1] = brr[i][1];
        farr[a][2] = brr[i][2];
        a++;
    }
}
cout<<"the sum of the matrices is : "<<endl;
for (int i = 0; i < rowf; i++)
{
  for (int j = 0; j <colf; j++)
  {
  bool flag = false;
  for (int k = 0; k < a; k++)
  {
    if (i==farr[k][0] && j==farr[k][1])
  {
   cout<<farr[k][2]<<" ";
   flag = true;
   break;
  }
  }
   if (!flag) cout<<"0 ";
  }
  cout<<endl;
}
return 0;

}




//   struct sparse{
//     int row;
//     int col;
//     int val;
//   };
//   class sparsematrix{
//     int rows ,cols, nonzero_num;
//     sparse *Elements;
//     sparse *Elements2;
//     sparse *addition_matrix;
//     public:
//     sparsematrix(int r,int c, int num){
//       rows=r;
//       cols=c;
      
      
//       nonzero_num=num;
//       Elements2= new sparse[nonzero_num];
//       Elements= new sparse[nonzero_num];
//       addition_matrix=new sparse[nonzero_num];
//     }
//     ~sparsematrix(){
//       delete[] Elements;
//     }
  
//   void read() {
    
//     cout<<"enter first sparse matrix "<<endl;
//     for(int i=0;i<nonzero_num;i++){
//       cin>>Elements[i].row>>Elements[i].col>>Elements[i].val;
//     }
//     cout<<"enter the second sparse matrix"<<endl;
//     for(int i=0;i<nonzero_num;i++){
//       cin>>Elements2[i].row>>Elements2[i].col>>Elements2[i].val;
//     }
  
// }
//   // void display() {
//   //   cout<<"FULL MATRIX"<<endl;
//   //   int n;
//   //   int k=0;
//   //   for(int i=0;i<rows;i++){
//   //     for(int j=0;j<cols;j++){
//   //       if(k<nonzero_num && Elements[k].row==i && Elements[k].col==j){
//   //         cout<<Elements[k++].val<<" ";
//   //       }
//   //       else{
//   //         cout<<"0"<<" ";
//   //       }
//   //     }
//   //     cout<<endl;
//   //   };
//   // }
//   // void transpose(){
//   //   sparse *Transpose;
//   //   Transpose=new sparse[nonzero_num];
//   //   for(int i=0;i<nonzero_num;i++){
//   //     Transpose[i].row=Elements[i].col;
//   //     Transpose[i].col=Elements[i].row;
//   //     Transpose[i].val=Elements[i].val;
//   //     cout<<"transpose matrix is "<<endl;
//   //     cout<<Transpose[i].row<<" "<<Transpose[i].col<<" "<<Transpose[i].val<<endl;
//   //   }
    
 
//   void addition(){
//     cout<<"addition matrix is"<endl;
//     for(int i=0;i<nonzero_num;i++){
//       for(int j=0;j<nonzero_num;j++){
//       if(Elements[i].row==Elements2[j].row && Elements[i].col==Elements2[j].col){
//       cout<<Elements[i].row<<" "<<Elements[i].col<<" "<<Elements[i].val+Elements2[j].val<<endl;

//     }
//     else{
//       cout<<Elements2[j].row<<" "<<Elements2[j].col<<" "<<Elements2[j].val<<endl;

//     }
//     break;
//   }
  
//   cout<<Elements[i].row<<" "<<Elements[i].col<<" "<<Elements[i].val<<endl;
// }
//   }

// };
//   int main(){
//     int r=5;int c=5; int nonzero_num=8;
//     sparsematrix sm(  r,  c, nonzero_num);
//     sm.read();
//     sm.addition();
//   }

//   //sparse sp;
//   //cout<<"enter the elements";
//   //for(i=0;i<3;i++){
//     //for(j=0;j<3;j++){
//       //cin>>a[i][j];
//   //   }
//   // }
//   //for(i=0;i<3;i++){
//   //  for(j=0;j<3;j++){
//   //    if (a[i][j]!=0){
//   //     sp.row=i;
//   //   sp.col=j;
//   //   sp.val=a[i][j];
//   //   cout<<sp.row<<sp.col<<sp.val;
//   //    }
//   //    cout<<endl;
//   // }
//   // }
  

