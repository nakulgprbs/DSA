// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
vector<int> v;
        v = {1,2,3};
        cout<<"size: "<<v.size()<<endl; // v.size();  to length of vector
        
        v.resize(8); // to set new size of vector
        cout<<"new size: "<<v.size()<<endl;
       cout<<"capacity: "<< v.capacity()<<endl; // capacity >= lenth it is in form 2^n;
        cout<<v[1]<<endl; // to accesss any element from indexing 
      
        // add element to vector 
        
        v.push_back(10); //add element after last element
        cout<<"new size after putting 10 after last element: "<<v.size()<<endl;
     //   v.insert(3,15); // insert at any position (3 -position and 15 -element) position is related to first position 
     v.insert(v.begin()+2, 15);
        cout<<"new size after inserting 15: "<<v.size()<<endl;
      // v.begin();
     // cout<< v.begin()<<endl; // to get position of first element
       
      //  v.end(); // position of end element of vector
        
        // delete element from vector
        v.pop_back(); //deleting element from last of the vector
        v.pop_back();
        cout<<"new size after pop: "<<v.size()<<endl;
        v.erase(v.begin()+3); // deleting elements from a fixed posiotion 
        cout<<"new size after erase function: "<<v.size()<<endl;
        v.clear(); //to clear all elements
        cout<<"new size after clear: "<<v.size()<<endl;

    return 0;
}