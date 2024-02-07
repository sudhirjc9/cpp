#include<iostream>
using namespace std;

class complex{
    int a, b;

public:
    complex() = default; 
    complex(int x, int y):a(x), b(y){
    }

    friend void fun(complex);               // declaration of friend function
    void print(){
        cout<<"a "<<a<<" b "<<b<<endl;
    }
};


void fun(complex c){
    cout<<" sum of a and b is: "<<c.a+c.b<<endl;
}

int main(){
    complex obj1(2,2), obj2(3,3), obj3, obj4;                          
    fun(obj1);

}