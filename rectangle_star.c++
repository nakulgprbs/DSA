#include <iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"enter row and colomn"<<endl;
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
    return 0;
}