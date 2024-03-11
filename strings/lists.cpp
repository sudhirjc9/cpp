#include<iostream>
#include<list>

using namespace std;
int main(){

    list<int>l;
    for(int i = 0; i<7; i++){
        l.push_back(i);
    }

    auto it = l.begin();

    while(l.size() > 1){
      for(int i = 1; i<3; i++){
            it++;
            if(it == l.end())
                it = l.begin();
      }  
      it = l.erase(it);
      if(it == l.end())
        it = l.begin();
    }

    cout<<(*it)<<endl;
}