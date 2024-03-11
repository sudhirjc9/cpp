#include<iostream>
#include<set>

int main(){
    int arr[] = {7,2,4,6,9,1,1,1,3,4};
    int n = sizeof(arr)/(sizeof(int));
    std::set<int>s(arr, arr+n);

    for(auto it = s.begin(); it!=s.end(); it++)
        std::cout<<(*it)<<" ";
}