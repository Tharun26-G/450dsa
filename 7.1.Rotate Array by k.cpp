#include<bits/stdc++.h>

using namespace std;

void rotate(int arr[], int n,int k){
 k = k % n;

    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
}



int main(){
      int n,k;
    cin>>n;
    // array declaration
    int arr[n];
    // taking array value as input
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     cin>>k;

// calling the rotate function
    rotate(arr, n,k);

    // printing the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

