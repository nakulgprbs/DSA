// peak index value in mountain array

#include <iostream>
#include <vector>
using namespace std;

int peak(vector<int> &input){
    int low =1, high = input.size()-1;
    int ans = -1;
    
    while(low<=high){
        int mid = low +(high-low)/2;
        if(input[mid]>input[mid-1]){
            ans = mid;
            low = mid+1; // move to right part
        }
        else
        high =mid -1;  // check only in left part
    }
    return ans;
}

int main(){
    vector<int> input;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    
    cout<<"enter all values"<<endl;
    while(n--){
        int x;
        cin>>x;
        input.push_back(x);  // push vales 
    }
    cout<<"peak index is ";
    cout<<peak(input)<<endl;
    
    return 0;
}