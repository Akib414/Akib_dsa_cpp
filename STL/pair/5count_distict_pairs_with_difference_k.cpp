//THIS IS WITH THE COMPLEXITY OF O(N^2);
//WITH BINARY SEARCH IT CAN BE REDUCED TO NLOGN;

#include<bits/stdc++.h>
using namespace std;
	int TotalPairs(vector<int>nums, int k){
	    // Code here
	    vector<pair<int,int> >v;
	    
	    for(int i=0;i<nums.size();i++){
	        for(int j=0;j<nums.size();j++){
	            if((i!=j)&&nums[i]-nums[j]==k) 
	            v.push_back({nums[i],nums[j]});
	        }
	    }
	    
	   sort(v.begin(),v.end());
	   int size = unique(v.begin(),v.end())-v.begin();
	   return size;
	}
int main(){
     
  vector<int>v;
  v={1,2,3,4,5};
  int k=1;
  int ans = TotalPairs(v,k);
  cout<<ans<<endl;
return 0;
}
