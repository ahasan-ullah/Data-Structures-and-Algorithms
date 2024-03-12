#include<bits/stdc++.h>
using namespace std;
bool is_Power_of_Two(int n){
  return (n && !(n & (n-1)));
}
int main(){
  int n;
  cin>>n;
  cout<<is_Power_of_Two(n);
  return 0;
}