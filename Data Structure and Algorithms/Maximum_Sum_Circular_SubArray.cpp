#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
  int mx=INT_MIN,sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum<0){
      sum=0;
    }
    mx=max(sum,mx);
  }
  return mx;
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int wrapsum,nonwrapsum;
  nonwrapsum=kadane(arr,n);
  int totalsum=0;
  for(int i=0;i<n;i++){
    totalsum+=arr[i];
    arr[i]= -arr[i];
  }
  wrapsum=totalsum+kadane(arr,n);
  cout<<max(wrapsum,nonwrapsum)<<endl;
  return 0;
}