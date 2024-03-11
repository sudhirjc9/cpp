// Pangram --> a string that contains all the alphabets from a to .
// anagram --> if two strings have same set of charecters they are called anagram of each other

#include<iostream>
#include<cstring>
using namespace std;

typedef struct sec{
        char ch[20];
};

int main(){
    sec s1, s2;
    strcpy(s1.ch, "geeksforgeeks");
    s2 = s1;

    s1.ch[0] = 'G';
    cout<<s2.ch<<endl;

}