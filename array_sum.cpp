#include <iostream>

using namespace std;

int main(){
 int array[5]= {1,2,3,4,5};
 int sum =0;

 // finding sum of array

 for(int i =0; i <5; i++){
  sum = sum + array[i];
 }
cout<<sum<< endl;

  return 0;
}