#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min])
        min=j;
    }
    if(min!=i){
      int temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  selectionSort(arr,n);
  return 0;
}