#include<iostream>
using namespace std;

class integer{
    int x;

public:
    void setData(int a){
        x = a;        
    }

    void printData()
    {
        cout<<"x: "<< x<<endl;
    }


    integer operator++(){               // pre-increment overloading
        integer i;
        i.x = ++x;
        return i;
    }

    integer operator++(int){           // int as an argument is just passed so that compiler can differentaite b/w pre and post increment, it has no other significance
        integer i;
        i.x = x++;
        return i;
    }


    integer operator--(){
        integer i;
        i.x = --x;
        return i;
    }

    integer operator--(int){
        integer i;
        i.x =x--;
        return i;
    }
};

int main(){
    integer i1, i2, i3;
    integer j1, j2, j3;

    //pre and post increment
    i1.setData(10);

    i2= ++i1;           // pre-increment
    i3= i1++;           //post-increment

    i2.printData();
    i3.printData();
    i1.printData();


    // pre and post decrement
        j1.setData(10);

    j2= --j1;           // pre-increment
    j3= j1--;           //post-increment

    j2.printData();
    j3.printData();
    j1.printData();
}