#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int sum=0,mx=INT_MIN;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum<0){
      sum=0;
    }
    mx=max(sum,mx);
  }
  cout<<mx<<endl;
  return 0;
}