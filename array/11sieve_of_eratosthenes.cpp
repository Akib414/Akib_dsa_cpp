#include<iostream>
using namespace std;
void eratosthenes(int n){
    long long int arr[500001]={0};
    for(long long int i=2;i<=n;i++){
        
            for(long long int j=i*i;j<=n;j+=i){
             if(arr[i]==0){   
                arr[j]=1;
            }
        }
    }
    for(long long int i=2;i<=n;i++){
        if(arr[i]==0){
            cout<<i<<endl;
        }
    }
cout<<endl;
}
int main(){
eratosthenes(500000);

}