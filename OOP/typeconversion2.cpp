#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Thu Feb 17 2022
 *  File : typeconversion1.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class Complex {
    int a,b;
    public:
        void setdata(int x, int y){
            a = x;
            b = y;
        }
        void showdata(){
            cout<< a << " & " << b << endl;
        }
        operator  int(){                              // For Class to Primitive type Conversion (CASTING OPERATOR)
            return(a);
        }
};
int main(){
    Complex c1;
    int x;
    c1.setdata(3,5);
    x = c1;                                           // ERROR if not type converted
    cout << x << endl;
    return 0;
}