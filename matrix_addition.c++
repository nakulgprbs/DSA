#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    int a[10][10],b[10][10],q[10][10];
    cout<<"enter rows and column\n";
    cin>>r>>c;
    cout<<"enter your first matrix\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        cin>>a[i][j];
    }

cout<<"enter your second matrix\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        cin>>b[i][j];
    }

    cout<<"your result matrix is \n";
     for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        q[i][j]=a[i][j]+b[i][j];
        
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        cout<<q[i][j]<<" ";
       
        cout<<"\n";
    }
}