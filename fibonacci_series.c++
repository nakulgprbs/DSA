#include <iostream>
#include <math.h>
using namespace std;

void fib(int x){
   int t1=0;
   int t2=1;
   int nextterm;
   for(int i=1;i<=x;i++){
       cout<<t1<<endl;
       nextterm = t1+t2;
       t1=t2;
       t2=nextterm;
   }
   return;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    fib(n);
    
    return 0;
}