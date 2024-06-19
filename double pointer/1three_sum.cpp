#include <bits/stdc++.h>

using namespace std;
int main()
{
    // Write your code here
  int t;
  cin>>t;
  while(t--){
        int n,target;
        cin>>n>>target;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       sort(arr,arr+n);

       int a=0;
        for(int i=0;i<n;i++){
            int s=i+1,e=n-1;
          
        while(s<e){
            if(arr[i]+arr[s]+arr[e]==target){
                a=1;
                break;
            }
            else if(arr[i]+arr[s]+arr[e]>target){
                e--;
            }
            else s++;    
        }
        }
        if(a==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
  }

    return 0;
}