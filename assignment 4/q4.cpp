#include<iostream>
#include<queue>
using namespace std;
firstnon_repeating(string s){
  int freq[256]={0};
  int i;
  queue<char> q;
  for(i=0;i<s.size();i++){
    q.push(s[i]);
    freq[s[i]]++;
    while(!q.empty() && freq[q.front()]>1){
      q.pop();
      
    }
    if(!q.empty()){
      cout<<q.front();}
      else{
        cout<<-1;
      }
    }
  }

int main(){
  string s="anshita";
  firstnon_repeating(s);
}