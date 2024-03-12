//For One Unique Number
// #include<bits/stdc++.h>
// using namespace std;
// int unique_Number(int arr[],int n){
//   int xorsum=0;
//   for(int i=0;i<n;i++){
//     xorsum=xorsum^arr[i];
//   }
//   return xorsum;
// }
// int main(){
//   int arr[7]={1,2,3,4,1,2,3};
//   cout<<unique_Number(arr,7);
//   return 0;
// }



//For Two Unique Number
// #include<bits/stdc++.h>
// using namespace std;
// int set_Bit(int arr[],int n){
//   return (n & (1<<n)!=0);
// }
// void unique_Number(int arr[],int n){
//   int xorsum=0;
//   for(int i=0;i<n;i++){
//     xorsum=xorsum^arr[i];
//   }
//   int temp_xorsum=xorsum;
//   int set_bit=0;
//   int position=0;
//   while(set_bit!=1){
//     set_bit=xorsum & 1;
//     position++;
//     xorsum=1<<xorsum;
//   }
//   int newxor=0;
//   for(int i=0;i<n;i++){
//     if(set_Bit(arr[i],position-1)){
//       newxor=newxor^arr[i];
//     }
//   }
//   cout <<newxor<<endl;
//   cout <<(temp_xorsum^newxor)<<endl;
// }
// int main(){
//   int arr[7]={1,2,3,4,1,2,3};
//   unique_Number(arr,7);
//   return 0;
// }