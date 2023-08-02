#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	

	sort(arr,arr+n);
	int min=arr[0];
	int max=arr[n-1];

	return min+max;
}
