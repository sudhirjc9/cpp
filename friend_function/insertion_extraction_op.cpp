#include<iostream>
using namespace std;

class complex{
    int a, b;

public:
    complex() = default; 
    complex(int x, int y):a(x), b(y){
    }

    friend ostream& operator<<(ostream &, complex);
    friend istream& operator>>(istream &, complex&);

    void print(){
        cout<<"a "<<a<<" b "<<b<<endl;
    }
};

ostream& operator<<(ostream &dout, complex c){              // returning ostream so that cascading can happen 
        cout<<"a is: "<<c.a<<" b is: "<<c.b<<endl;
        return dout;
}

istream& operator>>(istream &din, complex &c){              // returning istream so that cascading can happen 
    cin>>c.a>>c.b;
    return din;
}

int main(){
    complex c1;

    cin>>c1;                                               // cin>> c1>>c2>>c3...etc
    cout<<c1;                                               //cout<<c1<<c2<<c3...etc

    c1.print();
}