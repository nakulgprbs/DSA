// binary search  problem of searching 
#include <vector>
#include <iostream>
using namespace std ;

int binarySearch(vector<int> &input, int target){
    int low = 0; // lowest value 
    int high = input.size()-1; // heightest value 
    while(low<=high){
        int mid = (low + high)/2;
        if(input[mid]==target){ // target found 
            return mid;
        }
        else if(input[mid]<target){ // now we need to search in right portion
            low = low+1;
        }
        else  // search in left portion 
        low = low -1;
    }
    return -1;
}

int main() {
   
   vector<int> input;
   int n,x,target;
   cout<<"inter size"<<endl;
   cin>>n;
   cout<<"enter elements: "<<endl;
   for(int i=0; i<n; i++){
       cin>>x;
       input.push_back(x);
   }
   cout<<"enter target"<<endl;
   cin>>target; // get target from user
   cout<<binarySearch(input, target);
   
    return 0;
}