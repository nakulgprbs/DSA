// oops in c++

#include <iostream>
using namespace std;

/* incapsulation :-
                binding of two method and variables in a single unit i.e :- class
*/
/*
class Rectangle{
    public:
    int l;
    int b;
    
  Rectangle(){ // defult constructor -no argu pass
        l=0;
        b=0;
    }
    Rectangle(int x, int y){ // parameterised constructor -argu pass
        l=x;
        b=y;
    }
    Rectangle(Rectangle& r){ //copy constructor 
        l= r.l;
        b= r.b;
    }
    ~Rectangle(){ // distructor 
        cout<< "distructor is called."<<endl;
    }
};
int main(){
    Rectangle *r1 = new Rectangle;
    Rectangle r2(3,4);
    Rectangle r3= r2;
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;
    
    cout<<r2.l<<" "<<r2.b<<endl;
    
    cout<<r3.l<<" "<<r3.b<<endl;
    
    return 0;
}
*/

// incaplution

/*
class ABC{
    int x;
    
    public:
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }
};

int main(){
    ABC obj;
    obj.set(3);
    cout<<obj.get()<<endl;
    
    return 0;
}
*/

// abstraction :- enables us to display only essential information while hiding implementation details   ex. pow(x,y)= x^y

// inheritance 
/*
class Parents {
    public:
    int x;
    protected:
    int y;
    private:
    int z;
    
};
class child1: public Parents 
{
    // x will be public
    // y will be protected 
    // z not accessible 
};
class child2: private Parents{
    // x will be private 
    // y will be private
    // z not accessible 
};
class child3: protected Parents{
    // x  will be protected 
    // y will be protected 
    // z not accessible
}
*/

// types of inheritance
// 1. single inheritance 
/*
class Parents{
    public:
    Parents(){
        cout<<"parent class"<<endl;
    }
};
class Child: public Parents{
    public:
    Child(){
        cout<<"child class"<< endl;
    }
};

int main(){
    Child c;
    
    return 0;
}
*/

//2. multi level inheritance
/*
class Parents{
    public:
    Parents(){
        cout<<"parent class"<<endl;
    }
};
class Child: public Parents{
    public:
    Child(){
        cout<<"child class"<< endl;
    }
};
class Grandchild: public Child{
    public:
    Grandchild(){
        cout<<"Grandchild"<<endl;
    }
};
int main(){
    Grandchild g;
    
    return 0;
}
*/

//3. multi- inheritance - multiple parents
/*
class Parent1{
    public:
    Parent1(){
        cout<<"parent 1 class"<<endl;
    }
};
class Parent2{
    public:
    Parent2(){
        cout<<"parent 2 class"<<endl;
    }
};
class Child: public Parent1, public Parent2 {
    public:
    Child(){
        cout<<"child class"<< endl;
    }
};
int main(){
    Child c;
    
    return 0;
}
*/
// hierarchical inheritace - multiple child classes of single parent 
/*
class Parent{
    public:
    Parent(){
        cout<<"parent class"<<endl;
    }
};
class Child1: public Parent{
    public:
    Child1(){
        cout<<"child 1 class"<< endl;
    }
};
class Child2: public Parent{
    public:
    Child2(){
        cout<<"child 2 class"<< endl;
    }
};
int main(){
    Child1 c;
    Child2 c2;
    return 0;
}
*/

// hybrid inheritance  - combination of different inheritance 

//** Diamond Problem - base class has multiple parent classes having a common ancestor class

/* ** Polymorphism :- ability of object/ method to take differnt forms
types :- 
    1. compile time polymorphism
    2. function overloading :- diffine a no. of function with same function name. they perform differently acc. to arguments pass.
    
    */
class sum {
    public:
    void add(int x, int y){
        int sum = x+y;
        cout<<sum<<endl;
    }
    void add(int x, int y, int z){
        int sum = x+y+z;
        cout<<sum<<endl;
    }
    void add(float x, float y){
        float sum = x+y;
        cout<<sum<<endl;
    }
};

int main(){
    sum s;
    
    s.add(2,3);
    s.add(1,5,6);
    s.add(2.3, 5.6);
    
    return 0;
}