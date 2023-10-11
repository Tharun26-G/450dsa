#include <iostream>


using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
   int minelement = arr[0];
   int maxelement = arr[0];
   for(int i=1;i<n;i++){
   if(arr[i]<minelement){
       minelement = arr[i];
   }
   if(arr[i]>maxelement){
       maxelement=arr[i];
   }
   }
   cout<<minelement<<endl;
   cout<<maxelement<<endl;
}
