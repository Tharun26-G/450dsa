class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> unionSet;
        
        // Add elements from array a to the union set.
        for (int i = 0; i < n; ++i) {
            unionSet.insert(a[i]);
        }
        
        // Add elements from array b to the union set.
        for (int i = 0; i < m; ++i) {
            unionSet.insert(b[i]);
        }
        
        // Return the size of the union set, which represents the count of unique elements.
        return unionSet.size();
    }
};
