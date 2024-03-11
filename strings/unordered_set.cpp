#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(120);

    for(auto it = s.begin(); it !=s.end(); it++)
        cout<<(*it)<<endl;

}