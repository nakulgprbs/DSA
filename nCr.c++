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
    int n,r;
    cout<<"enter the n and r."<<endl;
    cin>>n>>r;
    cout<<fac(n)/(fac(r)*fac(n-r));
    
    return 0;
}