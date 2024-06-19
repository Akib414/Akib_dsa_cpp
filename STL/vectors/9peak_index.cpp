// Problem
// Given an array A of N integers, classify it as being Good Bad or Average. It is called Good, if it contains exactly X distinct integers, Bad if it contains less than X distinct integers and Average if it contains more than X distinct integers.

// Input format:
// First line consists of a single integer T denoting the number of test cases.
// First line of each test case consists of two space separated integers denoting N and X.
// Second line of each test case consists of N space separated integers denoting the array elements.

// Output format:
// Print the required answer for each test case on a new line.

#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,x;
     cin>>n>>x;
     vector<int>v;
 for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
 }
 sort(v.begin(),v.end());
 int sizeofuniq = unique(v.begin(),v.end()) - v.begin();
 if(sizeofuniq==x) cout<<"GOOD"<<endl;
 else if(sizeofuniq>x) cout<<"AVERAGE"<<endl;
 else cout<<"BAD"<<endl;


return 0;
}
