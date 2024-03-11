#include<iostream>
#include<string>
//#include<math.h>
using namespace std;

void powerSets(string str){
    int num = (1<<str.length());
    int len = str.length();

    for(int i =0; i < num; i++)
        {
            for(int j =0; j<len; j++)
                {
                    if(i&(1<<j)){
                        cout<<str[j];
                    }
                }
                cout<<endl;
        }
}

int main(){
    string str = "ADC";

    powerSets(str);

}