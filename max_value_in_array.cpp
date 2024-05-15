// to find the max number in an array using linear traversal
#include <iostream>
using namespace std;

int main(){
 
int array[5] = {1, 3, 812, 56, 6};
int max = array[0];


for(int i =0; i<5;i++){
  cout<<array[i]<<" ";
}
cout<<endl;
for(int i =1; i<5; i++){
  if(array[i]>max){
    max = array[i];
  }
}
cout<<max<<endl;

return 0;

}