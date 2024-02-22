#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int x){
  int i;
  for(i=0;i<n;i++){
    if(arr[i]==x){
      return i;
    }
  }
  i=-1;
  return i;
}
int main(){
  int n,x;
  cin>>n>>x;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int index = linearSearch(arr,n,x);
  if(index== -1){
    cout<<"Not Found";
  }
  else{
    cout<<"Found at index "<<index;
  }
  return 0;
}