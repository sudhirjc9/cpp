#include<iostream>
using namespace std;

class complex{
    int a, b;

public:
    complex() = default; 
    complex(int x, int y):a(x), b(y){
    }

    complex operator+(complex obj)          // operator overloading 
    {
        complex temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;

        return temp;
    }

    //complex operator=(complex obj) = delete;

    void print(){
        cout<<"a "<<a<<" b "<<b<<endl;
    }
};


int main(){
    complex obj1(2,2), obj2(3,3), obj3;
    obj3= obj1+obj2;                            //defining + for user defined data type
    

    obj3.print();

}