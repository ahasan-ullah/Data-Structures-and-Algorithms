#include<bits/stdc++.h>
using namespace std;
int number_of_ones(int n){
  int count=0;
  while(n){
    n=(n&(n-1));
    count++;
  }
  return count;
}
int main(){
  int n;
  cin>>n;
  cout<<number_of_ones(n);
  return 0;
}