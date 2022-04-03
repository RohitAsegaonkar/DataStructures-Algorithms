#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Tue Feb 15 2022
 *  File : Abstract_class.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class A{                                           // Class A is now Abstract Class.
    public:
        virtual void f1()=0;                       // Do nothing function.  (Pure Virtual Function).

};
class B: public A{
    public:
        void f1(){}                        // Function Overriding.
};
int main(){
    return 0;
}