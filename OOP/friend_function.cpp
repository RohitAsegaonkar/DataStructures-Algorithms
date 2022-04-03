#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Fri Feb 11 2022
 *  File : friend_function.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *  Info : Friend Function
 *******************************************/
class Real;
class Complex{

    int a,b;
    public:
        void set_data(int x, int y){
            a=x;b=y;
        }
        void show(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
        friend void fun(Complex,Real);
        friend istream& operator>>(istream&,Complex);
        friend ostream& operator<<(ostream&,Complex);
};
istream& operator>>(istream &din, Complex C){
    cin>>C.a>>C.b;
    return(din);
}
ostream& operator<<(ostream &dout, Complex C){
    cout<<C.a<<C.b<<endl;
    return(dout);
}
class Real{
    int p,q;
    public:
        void set_data(int x, int y){
            p=x;q=y;
        }
        void show(){
            cout<<p<<"/"<<q<<endl;
        }
        friend void fun(Complex, Real);
};
void fun(Complex c,Real d){
    cout<<"Magnitude of Variable is "<< c.a+d.p << " "<< c.b + d.q<<endl;
}
int main(){
    Complex c1,c2,c3,c4;
    Real d1;
    d1.set_data(4,5);
    c1.set_data(2,3);
    c2.set_data(4,6);
    c3.set_data(0,9);
    cout<<c3;
    cin>>c3;
    cout<<c3;

    return 0;
}
