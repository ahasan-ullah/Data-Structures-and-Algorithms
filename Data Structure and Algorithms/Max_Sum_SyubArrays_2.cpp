#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int cumarr[n+1];
  cumarr[0]=0;
  for(int i=1;i<=n;i++){
    cumarr[i]=cumarr[i-1]+arr[i-1];
  }
  int mx=INT_MIN;
  for(int i=1;i<=n;i++){
    int sum=0;
    for(int j=0;j<i;j++){
      sum=cumarr[i]-cumarr[j];
      mx=max(sum,mx);
    }
  }
  cout<<mx<<endl;
  return 0;
}