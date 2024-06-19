#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
char arr[100001];
while(cin.getline(arr,100000)){
int s = strlen(arr);
// int n;
// for(int i=0;i<s;i++)
// if(arr[i]==' ') n++;
// for(int i=0;i<s-1;i++){
//      for(int j=i+1;j<s;j++){
//           if(arr[i]<arr[j]){
//                swap(arr[i],arr[j]);
//           }
//      }
// }
    sort(arr,arr+s);
// int i=0,j=s-1;
// while(i<j){
//      swap(arr[i],arr[j]);
//      i++;
//      j--;
// }
for(int i=0;i<s;i++){
    if(arr[i]!=' ') cout<<arr[i];
}
    cout<<endl;
}
    

    return 0;
}