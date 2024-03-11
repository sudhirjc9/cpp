#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
      string str = "geeksforgeeks";
      // Reversing a string
      int i = 0, j = str.length()-1;

      while( i < j)
            {
                  swap(str[i], str[j]);
                  i++;
                  j--;
            }
      cout<<str<<endl;

      // binary to decimal
      string binary="1001";
      int len = binary.length();

      int res =0, index = 0;
      
      while(len>=1){
            int x = (binary[index]-'0');
        res=res+ x*pow(2, len-1);
        index++;
        len--;
       }

        cout<<"binary equalent: "<<res<<endl;


        // find one extra charrecter
            string str1 = "abcd", str2 = "abecd";

            int sum1=0, sum2 =0;
            for(int i = 0; i<str1.length(); i++)
                  sum1+=str1[i];
            for(int i = 0; i<str2.length(); i++)
                  sum2+=str2[i];

            cout<<char(abs(sum1-sum2))<<endl;

            // anathor approch we can use is of ex-or, ie ex-or both the string inputs and left one is the odd one out

  }