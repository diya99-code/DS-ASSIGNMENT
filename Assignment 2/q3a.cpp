#include<iostream>
using namespace std;
void findmissingnumber(int a[],int n){
  int i;
  for(i=0;i<n-1;i++){
    if( a[i]!=i+1){
      cout<<"missing element is at"<<i<<"index"<<endl;
      cout<<"the missing number is"<<i+1<<endl;
      break;
    }
  }
}
int main(){
  int a[6]={1,2,4,5,6};
  int n=6;
  findmissingnumber(a, n);

}