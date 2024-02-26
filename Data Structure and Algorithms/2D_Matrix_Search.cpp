// Problem
// Given a nxm matrix.
// Write an algorithm to find that the given value exists in the matrix or not.
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// Constraints
// 1 <= N,M <= 1,000

// Sample Test Case:
// Consider the following matrix:
// [
// [1, 4, 7, 11, 15],
// [2, 5, 8, 12, 19],
// [3, 6, 9, 16, 22],
// [10, 13, 14, 17, 24],
// [18, 21, 23, 26, 30]
// ]
// Given target = 5, return true.

// Given target = 20, return false.

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,x;
  cin>>n>>m>>x;
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  int r=0,c=m-1;
  bool found= false;
  while(r<n && c>=0){
    if(arr[r][c]==x){
      found=true;
    }
    arr[r][c]>x?c--:r++;
  }
  if(found==true){
    cout<<"Number found";
  }
  else{
    cout<<"Not Found";
  }
  return 0;
}