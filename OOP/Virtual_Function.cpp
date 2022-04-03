#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Mon Feb 14 2022 (Happy Valentine's Day)
 *  File : Virtual_Function.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class A{
    public:
        virtual void f1(){                            // By writing 'virtual' keyword it tells compiler for late binding of function f1().
            cout<<"I am in Class A"<<endl;
        }
};
class B:public A{
    public:
        void f1(){
            cout<<"I am in Class B"<<endl;            // Function Overriding.
        }
};
int main(){
    A *p, o1;
    B o2;
    p = &o2;                                          // Base Class Pointer.
    o2.f1();
    p->f1();                                          // This causes problem due to Early Binding and Function Overriding is not done properly!

    return 0;
}