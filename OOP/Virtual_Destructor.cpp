#include<bits/stdc++.h>
using namespace std;


/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Fri Feb 18 2022
 *  File : Virtual_Destructor.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class A{
    int a, b;
    public:
        A(){}                                      // Default Constructor
        void f1(){cout<<"Im in A's f1"<<endl;}
        virtual ~A(){                                      // Destructor
            cout<< "Im in th Destructor of A" << endl;
        }
};
class B : public A{
    int x, y, *p;
    public:
        B(){
            p = new int;
        }                                      // Default Constructor
        void f1(){cout<<"Im in  B's f2"<<endl;}
        void f2(){cout<<"Im in f2"<<endl;}
        ~B(){                                      // Destructor
            cout<< "Im in th Destructor of B" << endl;
            delete p;
        }
};
int fun(){
    A *p = new B;
    p->f1();                                      // ERROR
    delete p;
    return 0;
}
int main(){
    fun();
    return 0;
}