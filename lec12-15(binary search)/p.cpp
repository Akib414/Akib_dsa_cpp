#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>&points,int racers , int number_of_points , int mid){
    int current_position = points[0],racers_positioned = 1;;
    
    for(int i=1;i<number_of_points;i++){
        if(points[i]-current_position >= mid ){
            racers_positioned++;
            current_position = points[i];
            if(racers_positioned == racers) return true;
        }

    }
return false;
}


int maximum_distance(vector<int>&points,int racers , int number_of_points){
    int low = 0,ans=-1;
    int high = points[points.size()-1]-points[0];
    while(low<=high){
        int mid = low + (high-low)/2;
        if(ispossible(points,racers,number_of_points,mid)){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    return ans;
}
int main(){
     int racers,number_of_points;
     cin>>racers>>number_of_points;
     vector<int>points;
     for(int i=0;i<number_of_points;i++){
        int x;
        cin>>x;
        points.push_back(x);
     }
cout<<maximum_distance(points,racers,number_of_points);


return 0;
}