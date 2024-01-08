#include <iostream>
#include <math.h>
using namespace std;
bool prime(int x){
    int i;
    for(i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
   
}

int main(){
    int a,b;
    cout<<"enter two no."<<endl;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    
    return 0;
}