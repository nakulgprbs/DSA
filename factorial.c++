#include <iostream>
#include <math.h>
using namespace std;
int fac(int x){
    int i,fact=1;
    for(i=x;i>1;i--){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"enter the number."<<endl;
    cin>>n;
    cout<<fac(n);
    
    return 0;
}