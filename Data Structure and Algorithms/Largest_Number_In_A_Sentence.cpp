#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  cin.ignore();
  char arr[n+1];
  cin.getline(arr,n);
  cin.ignore();
  int i=0;
  int curLen=0,maxLen=0,start=0,max_start=0;
  while(true){
    if(arr[i]==' ' || arr[i]=='\0'){
      if(curLen>maxLen){
        maxLen=curLen;
        max_start=start;
      }
      curLen=0;
      start=i+1;
    }
    else{
      curLen++;
    }
    if(arr[i]=='\0'){
      break;
    }
    i++;
  }
  cout<<maxLen<<endl;
  for(int i=0;i<maxLen;i++){
    cout<<arr[i+max_start];
  }
  return 0;
}