#include<iostream>
#include<future>

int square(int x){
    //std::cout<<"integer is: "<<x<<std::endl;
    return x*x;
}

int square_fn(int x){
    std::cout<<"integer is: "<<x<<std::endl;
    return x*x;
}

int main(){
    std::future<int> asyncFunction = std::async(square_fn, 15);
    for(int i=0; i<10; i++){
        std::cout<<"square: "<<square(i)<<std::endl;
    }

    int result = asyncFunction.get();
    std::cout<<"result is: "<<result<<std::endl;
    return 0;
}