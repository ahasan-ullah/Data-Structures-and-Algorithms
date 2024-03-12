#include<bits/stdc++.h>
using namespace std;
int get_Bit(int n,int position){
  return (n & (1<<position))!=0;
}
int set_Bit(int n,int position){
  return (n | (1<<position));
}
int clear_Bit(int n,int position){
  int a=~(1<<position);
  return (n & a);
}
int update_Bit(int n,int position,int value){
  int a=~(1<<position);
  n=(n&a);
  return (n|(value<<position));
}
int main(){
  cout<<get_Bit(5,2)<<endl;
  cout<<set_Bit(5,1)<<endl;
  cout<<clear_Bit(5,2)<<endl;
  cout<<update_Bit(5,1,1);
  return 0;
}