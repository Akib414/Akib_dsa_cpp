#include<bits/stdc++.h>
using namespace std;
bool candist(vector<int>&arr, int mid ,int s){
    int n=arr.size();
    int studentreqd=1;
    int currsum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
      if(currsum+arr[i] > mid){
            studentreqd++;
            currsum=arr[i];
            if(studentreqd>s) return false;    
        }
   
        else currsum+=arr[i];
    }
    return true;
  

}
int distchoc(vector<int> &arr,int s){
    int n=arr.size();
    int lo=arr[0];
    int hi=0;
    for(int i=0;i<arr.size();i++){
        hi+=arr[i];
    }
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(candist(arr,mid,s)){
          ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int s=2;
cout<<distchoc(v,s);
}

