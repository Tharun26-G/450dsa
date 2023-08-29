//Works for both positive and negative numbers 

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
         long long max_end_here=0;
            long long max_so_far=INT_MIN;
        for(int i=0;i<n;i++){
           
            
            max_end_here=max_end_here+arr[i];
            if(max_end_here<arr[i]){
                max_end_here=arr[i];
            }
            
            if(max_so_far < max_end_here){
                max_so_far=max_end_here;
            }
        }
        
        return max_so_far;
    }
};
