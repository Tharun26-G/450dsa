class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
        unordered_map<int, int> frequency;
        int count = 0;

    for (int i = 0; i < n; ++i) {
        int complement = k - arr[i];
        if (frequency.find(complement) != frequency.end()) {
            count += frequency[complement];
        }
        frequency[arr[i]]++;
    }

    return count;
    }
};
