#include <iostream>
using namespace std;
int main(){
    int i,j,m;
    int k=1;
    cout<<"enter row"<<endl;
    cin>>m;
    for(i=1;i<=m;i++){
        for(j=1;j<=i;j++){
        
             cout<<k<<" ";
             k=k+1;
         }
        
        cout<<endl;
    }
    
    
    return 0;
}