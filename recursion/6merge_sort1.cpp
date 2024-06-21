//here two additional arrays are created 
//it can be created dynamically so that later the memory can be freed

#include<bits/stdc++.h>
using namespace std;
void merge_and_sort(int *arr,int s, int e){

    int mid = s+(e-s)/2;
    int size1 = mid - s +1;
    int size2 = e - mid;


    int array1[size1];
    int array2[size2];
    int k = s;


    for(int i = 0 ; i < size1 ; i++) array1[i] = arr[k++];
    for(int i = 0 ; i < size2 ; i++) array2[i] = arr[k++];


    int i = 0 , j = 0;
    int main_index = s;


     while(i<=size1-1 && j<= size2-1){
    if(array1[i] >= array2[j]) arr[main_index++] = array2[j++];
    else arr[main_index++] = array1[i++]; 
     }


while(i<=size1-1) arr[main_index++] = array1[i++]; 
while(j<=size2-1)  arr[main_index++] = array2[j++];
}



void dividing_array_sort(int *arr,int s,int e){
    if(s>=e)  return;
    int mid = s+(e-s)/2;
    //diividing array into two parts in each call 
    dividing_array_sort(arr,s,mid);
    dividing_array_sort(arr,mid+1,e);
    //finally sending two parts to merge and sort
    merge_and_sort(arr,s,e);
}



int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
     }
     int s = 0 , e = n-1 ;
     dividing_array_sort(arr,s,e);
     for(int i = 0 ; i < n ; i++) cout<<arr[i]<<"    ";

return 0;
}