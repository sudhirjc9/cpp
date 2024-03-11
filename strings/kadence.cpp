#include<iostream>
#include <climits>
using namespace std;

int kadence(int arr[], int n){
    int current_sum = 0;
    int sum_so_far = INT_MIN;

    for(int i=0; i<n; i++){
        current_sum+=arr[i];
        if(sum_so_far < current_sum)
            sum_so_far = current_sum;

        if(current_sum < 0)
            current_sum = 0;
    }
}


int main(){

    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<kadence(arr,n)<<endl;
    return 0;
}