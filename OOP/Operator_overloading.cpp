#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Wed Feb 09 2022
 *  File : Operator_overloading.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *  Info : Operator Overloading Done. Great Example!
 *******************************************/
class Complex{

    int a,b;
    public:
        void set_data(int x, int y){
            a=x;b=y;
        }
        Complex operator +(Complex c){
            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return(temp);
        }
        Complex operator -(){
            Complex temp;
            temp.a =  -a;
            temp.b =  -b;
            return(temp);
        }
        Complex operator ++(){//Preincrement operator overloaded
            Complex temp;
            temp.a= ++a;
            temp.b= ++b;
            return(temp);
        }
        Complex operator ++(int){//Postincrement operator overloaded
            Complex temp;
            temp.a= a++;
            temp.b= b++;
            return(temp);
        }
        void show(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};
int main(){
    Complex c1,c2,c3,c4;
    c1.set_data(2,3);
    c2.set_data(4,6);
    c3 = c1 + c2;
    cout<<"Addition of Two Complex Numbers is ";
    c4 = c3++;
    c3.show();
    c4.show();
    return 0;
}