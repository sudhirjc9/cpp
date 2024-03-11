#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

void run(int count){
    while(count-->0){
        cout<<count<<" cppnuts "<<endl;
        std::this_thread::sleep_for(chrono::microseconds(5));
        cout<<" thread finished "<<endl;
    }
}

int main(){
    std::thread t1(run, 10);
    cout<<" main "<<endl;

    t1.detach();
    std::this_thread::sleep_for(chrono::milliseconds(100));
    cout<<" main after "<<endl;
    
    return 0;
}