//Approach 1:
pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long currmax=a[0];
    long long currmin=a[0];
    
    for(int i=0;i<n;i++){
        if(currmax<a[i]){
            currmax=a[i];
        }
        
        if(currmin>a[i]){
            currmin=a[i];
        }
    }
  return make_pair(currmin, currmax);
      
}

//Approach 2:

/*
pair<long long, long long> getMinMax(long long a[], int n) {
    
   sort(a,a+n);
   return make_pair(a[0],a[n-1]);
}
*/
