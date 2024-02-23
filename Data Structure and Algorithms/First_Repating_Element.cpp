// Problem--
// Given an array arr[] of size N. The task is to find the first repeating element in an array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.
// Constraints--
// 1 <= N <= 106
// 0 <= Ai <= 106
// Example
// Input:
// 7
// 1 5 3 4 3 5 6
// Output:
// 2
// Explanation:
// 5 is appearing twice and its first appearance is at index 2 which is less than 3
// whose first occurring index is 3.
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
      idx[i]=-1;
    }
    int minIdx=INT_MAX;
    for(int i=0;i<n;i++){
      if(idx[arr[i]] != -1){
        minIdx=min(minIdx,idx[arr[i]]);
      }
      else{
        idx[arr[i]]=i;
      }
    }
    if(minIdx==INT_MAX){
      cout<<"-1"<<endl;
    }
    else{
      cout<<minIdx+1<<endl;
    }
  }
  return 0;
}