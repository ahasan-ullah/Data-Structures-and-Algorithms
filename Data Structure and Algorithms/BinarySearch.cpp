#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int x){
  int left=0,right=n-1,mid;
  while(left<=right){
    mid=(left+right)/2;
    if(arr[mid]==x){
        return mid;}
    else if(arr[mid]<x){
        left=mid+1;}
    else{
        right=mid-1;}
  }
  return -1;
}
int main(){
  int n,x;
  cin>>n>>x;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  //for sorting the array
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  cout<<"After sorting the array"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int index = binarySearch(arr,n,x);
  if(index== -1){
    cout<<"Not Found";
  }
  else{
    cout<<"Found at index "<<index;
  }
  return 0;
}