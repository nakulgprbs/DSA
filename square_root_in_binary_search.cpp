// integer round of square root value of any number x using binary search 
#include <iostream>
using namespace std;

int squrt(int x){
    int low=1, high =x,mid;
    int ans =-1;
    while(low <= high){
        mid = low +(high - low)/2;
        if(mid * mid <= x){
          ans = mid;
        low = mid + 1;  
        }
    else
    high = mid - 1;
    }
    
    return ans;
};
int main(){
    int n;
    cout<<"enter no. "<<endl;
    cin>>n;
    cout<<"integer squart root of"<<" "<<n <<" "<<"is"<<" "<<endl;
    cout<<squrt(n)<<endl;
    return 0;
}