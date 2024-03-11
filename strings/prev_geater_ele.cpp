#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

void prev_greater(int arr[], int num){
    stack<int> st;

    for(int i = 0; i < num; i++){
        while(st.empty() == false && st.top() <= arr[i])
            st.pop();
        int val = st.empty() ? -1: st.top();
        cout<<val<<" ";
        st.push(arr[i]);
    }
}

class STACK{
    stack<int>st;
    int min_val;
public:
    STACK(){
        min_val  = INT_MAX;
    }

    void push(int num){
        if(num < min_val)
            min_val = num;
        st.push(num);
    }

    void pop(){
        if(st.empty() == false)
            st.pop();
        else
            cout<<"Stack is empty "<<endl;
    }

    int top(){
        return st.top();
    }

    int print_Smallest(){
        return min_val;
    }
};

int main(){
    int arr[] ={ 15, 10, 18, 12, 4, 6, 2, 8};
    STACK st;
    //prev_greater(arr, 8);
    for(auto x: arr){
        st.push(x);
        cout<<st.print_Smallest()<<" ";
    }
}
