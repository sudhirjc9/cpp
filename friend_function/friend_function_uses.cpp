#include<iostream>
using namespace std;

/*
    1. Friend function can become friend to more than one class.
    2. Freind fucntion can access private member of more than one class at the same time, which is not posssible by other ways. 
*/

class B;
class A{
    int a;
public:
   friend void func(A, B);
    A(int x):a(x){}
};

class B{
    int b;
public:
    friend void func(A, B);
    B(int x):b(x){}
};

void func(A obj1, B obj2){
    cout<<"sum of a and b is: "<<obj1.a + obj2.b<<endl;
}

int main(){
    A a(10);
    B b(20);

    func(a, b);

}