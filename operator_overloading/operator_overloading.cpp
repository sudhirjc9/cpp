#include<iostream>
using namespace std;

class complex{
    int a, b;

public:
    complex() = default; 
    complex(int x, int y):a(x), b(y){
    }

    complex operator+(complex obj)          // operator overloading (Binary operator overloading)
    {
        complex temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;

        return temp;
    }

    complex operator-(){                //   operator overloading (Binary operator overloading)
        complex temp;
        temp.a = -a;
        temp.b = -b;

        return temp;
    }

    //complex operator=(complex obj) = delete;

    void print(){
        cout<<"a "<<a<<" b "<<b<<endl;
    }
};


int main(){
    complex obj1(2,2), obj2(3,3), obj3, obj4;
    obj3= obj1+obj2;                            //defining + for user defined data type (Binary operator)
    
    /*
        In binary operator left object is the caller object
    */
    obj3.print();


    obj4 = -obj3;  // obj4 = obj3.operator-()                         // defining - for user defined data type (Unary operator)
    
    /*
        In unary operator there is only one object which is the caller also, and its behaviour is same as the one for primitive data types. eg, -5
    */

   obj4.print();
}