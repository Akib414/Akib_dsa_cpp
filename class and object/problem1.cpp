// You will be given an array A and the size of that array N. 
// You need to create a function named sort_it(). 
// After taking the input for the size in main function,
//  call that function by giving the size as parameter and take the array input inside that function.
// After that, you need to sort the array in descending order.
//    Then, return that array from the function and receive it in the main function. 
// Finally, print the sorted array in the main function.


#include <bits/stdc++.h>
using namespace std;
int* sort_it(int n){
    int* A = new int[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n,greater<int>());
    //here normal returning the address or pointer of A will not work
    //because after returning the pointer of A , the A will be destroyed as it is local variable
    //so it will not be accessible
    //by allocating dynamic memory it will stay intact
    //this array declared in a function can be returned to main function 
    return A;
}


int main()
{
    // Write your code here
int n;
    cin>>n; 
   int *ptr = sort_it(n);
      for(int i=0;i<n;i++)
        cout<<ptr[i]<<" ";
    
    return 0;
}


