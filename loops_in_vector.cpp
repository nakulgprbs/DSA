// loops in vector 

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v; // we can also give like v[5]; declaration of vector
    cout<<"enter 5 numbers:"<<endl;
    for(int i =0; i<5; i++){
        int ele;
        cin>>ele;
        v.push_back(ele); 
    }
    cout<< "using for loop like as array"<<endl;
    for(int i=0; i<v.size(); i++){ 
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    v.insert(v.begin()+2,45); // insert element at 3rd position 
    cout<<"again using for loop"<<endl;
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    v.erase(v.end()-2); // we can from begining also it delete 2nd last element
    cout<<"using while loop"<<endl;
    int j=0;  // initialization z with 0
    while(j<v.size()){
        cout<<v[j++]<<" "; // printing v[j]th term and increasing j with 1 index
    }
    cout<<endl;
    return 0;
}