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
        Complex(int k){                            // For Primitive to Class type Conversion
            a = k;
            b = 0;
        }
        Complex(){}                                //Default Constructor
        void setdata(int x, int y){
            a = x;
            b = y;
        }
        void showdata(){
            cout<< a << " & " << b << endl;
        }
};
int main(){
    Complex c1;
    int x = 7;
    c1 = x;                                            // ERROR if not type converted
    c1.showdata();
    return 0;
}