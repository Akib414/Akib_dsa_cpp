#include<bits/stdc++.h>
using namespace std;
bool canplacestudents(vector<int>&pos,int s,int mid){
    int studentsreqd=1;
    int lastplaced=pos[0];
    for(int i=1;i<pos.size();i++){
        if(pos[i]-lastplaced>=mid) {
            studentsreqd++;
            lastplaced=pos[i];
            if(studentsreqd==s) return true;
        }
    }
    return false;
}
int race(vector<int>&pos,int s){
    int lo=1;
    int hi=pos[pos.size()-1]-pos[0];
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(canplacestudents(pos,s,mid)){
        ans=mid;
        lo=mid+1;
        }
        else hi=mid-1;
    }
    return ans;

}
int main(){
int n;
cin>>n;
vector<int>pos;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    pos.push_back(x);
}
int s=3;
cout<<race(pos,s);
}