#include<bits/stdc++.h>

using namespace std;

void rotate(int arr[], int n){
int last = arr[n-1];

for(int i=n-1;i>0;i--){
    arr[i]=arr[i-1];
}
arr[0]=last;
}



int main(){
      int n;
    cin>>n;
    // array declaration
    int arr[n];
    // taking array value as input
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }

// calling the rotate function
    rotate(arr, n);

    // printing the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

