#include<iostream>
using namespace std;

class complex{
    int a, b;

public:
    complex() = default; 
    complex(int x, int y):a(x), b(y){
    }


    friend complex operator+(complex, complex);
    friend complex operator-(complex);


    void print(){
        cout<<"a "<<a<<" b "<<b<<endl;
    }
};


complex operator+(complex obj1, complex obj2)          // operator overloading (Binary operator overloading) through friend function
    {
        complex temp;
        temp.a = obj1.a + obj2.a;
        temp.b = obj1.b + obj2.b;

        return temp;
    }

complex operator-(complex obj){                //   operator overloading (  operator overloading) using friend function
        complex temp;
        temp.a = -obj.a;
        temp.b = -obj.b;

        return temp;
    }

int main(){
    complex obj1(2,2), obj2(3,3), obj3, obj4;
    obj3= obj1+obj2;                            //defining + for user defined data type (Binary operator)
    
    obj3.print();


    obj4 = -obj3;                           // defining - for user defined data type (Unary operator)

   obj4.print();
}