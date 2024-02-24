// #include<bits/stdc++.h>
// using namespace std;
// bool pairSum(int arr[],int n,int x){
//   for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//       if(arr[i]+arr[j]==x){
//         cout<<i<<" "<<j<<endl;
//         return true;
//       }
//     }
//   }
//   return false;
// }
// int main(){
//   int n,x;
//   cin>>n>>x;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   cout<<pairSum(arr,n,x);
//   return 0;
// }

// Another Approch
#include<bits/stdc++.h>
using namespace std;
bool pairSum(int arr[],int n,int x){
  int low=0,high=n-1;
  while(low<=high){
    if(arr[low]+arr[high]==x){
      cout<<low<<" "<<high<<endl;
      return true;
    }
    else if(arr[low]+arr[high]>x){
      high--;
    }
    else{
      low++;
    }
  }
  return false;
}
int main(){
  int n,x;
  cin>>n>>x;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=1;i<n;i++){
    int current=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>current){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=current;
  }
  cout<<"Sorted Array"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<pairSum(arr,n,x);
  return 0;
}