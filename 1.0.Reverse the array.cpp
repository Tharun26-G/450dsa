#include <iostream>
using namespace std;

int main() {
    //array size
    int n;
    cin>>n;
    // array declaration
    int arr[n];
    // taking array value as input
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
    //start and end pointer 
    int s=0;
    int e=n-1;
    
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    //priniting array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

/* space complexity: O(1)
   time complexity : O(n)  */
