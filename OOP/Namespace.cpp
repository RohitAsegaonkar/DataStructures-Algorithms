#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Fri Feb 18 2022
 *  File : Namespace.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
namespace MySpace{
    int a;
    int f1();
    class A{
        public:
            void fun();
    };
}
namespace ms = MySpace;                             // Alias Name for Namespace
int ms::f1(){
    cout<<"In f1"<<endl;
    return 0;
}
void ms::A::fun(){                                  // Scope Resolution Operator (::)
    cout<<"In fun"<<endl;
}
using namespace ms;
int main(){
    int b;
     cout<< a<<" & "<<b<<endl;
     f1();
     A o1;
     o1.fun();
    return 0;
}