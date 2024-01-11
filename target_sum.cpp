// target sum pairs: we will find number of pairs whose sum is equal to target value 
#include <iostream>
using namespace std;

int main(){
    int sum, count=0; // initially we set pairs as zero
    int x; // sum of two no from should be equal to x;
    cout<<"enter target: x"<<endl;
    cin>>x;
    int a[10];
     cout<<"enter array: "<<endl;
    for(int i =0; i<10; i++){ // taking arrray value from user
        cin>>a[i];
    }
     cout<<endl;
     
     cout<<"you define array as: "<<endl;
    for(int i =0; i<10; i++){  // array display
        cout<<a[i] <<" ";
    }
    cout<<endl;
    
    for(int i =0; i<10; i++)
    {
        for(int j = i+1;j<10; j++)
        {
            sum = a[i]+a[j]; 
            if(sum ==x){
                count = count +1;
            }
        }
    }
    cout<<"total pairs are ";
    cout<<count<<endl;
    
    return 0;
}
