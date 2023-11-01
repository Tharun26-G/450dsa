class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int i=0,j=0;
        int count=0;
        
        while(i<n && j<m){
            if(a[i]<b[j]){
                count++;
                i++;
            }
            
            else if(a[i]>b[j]){
                count++;
                j++;
                
            }
            else if(a[i]==b[j]){
                count++;
                i++;
                j++;
            }
        }
            while(i<n){
                count++;
                i++;
            }
            while(j<m){
                count++;
                j++;
            }
        
        return count;
    }
};
