#include<bits/stdc++.h>
using namespace std;
int main(){
  string s="fjhkhegksufkzsdhfyyyyyyykxhkd";
  int freq[26];
  for(int i=0;i<26;i++){
    freq[i]=0;
  }
  for(int i=0;i<s.size();i++){
    freq[s[i]-'a']++;
  }
  int maxFreq=0;
  char ans=' ';
  for(int i=0;i<26;i++){
    if(freq[i]>maxFreq){
      maxFreq=freq[i];
      ans=i+'a';
    }
  }
  cout<<maxFreq<<" "<<ans;
  return 0;
}