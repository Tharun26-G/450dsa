#include <algorithm>
using namespace std;

class Solution {
public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr + n);
        
        int ans = arr[n - 1] - arr[0];
        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;
        int mini, maxi;
        
        for (int i = 0; i < n - 1; ++i) {
            mini = min(smallest, arr[i + 1] - k);
            maxi = max(largest, arr[i] + k);
            
            if (mini < 0) {
                continue; // Skip negative values
            }
            
            ans = min(ans, maxi - mini);
        }
        
        return ans;
    }
};
