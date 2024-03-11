#include<iostream>
#include<unordered_map>
#include<queue>
#include<algorithm>



using namespace std;

bool cmp(pair<int, int>p1, pair<int, int>p2){
    if(p1.second == p2.second)
        return p1.first < p2.first;

    return p1.second > p2.second;
}

void print_freq(int arr[], int n){
    unordered_map<int, int>um;

    for(int i =0; i < n; i++){
        um[arr[i]]++;
    }

    vector<pair<int , int> >vec(um.begin(), um.end());

    for(auto it = vec.begin(); it !=vec.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
    cout<<"**********after soet***************"<<endl;
    sort(vec.begin(), vec.end(), cmp);

    for(auto it = vec.begin(); it !=vec.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }

}

int main(){
    int arr[] = {10, 20, 30, 10, 20 ,30, 40, 40, 50, 50, 50};
    print_freq(arr, 11);
}