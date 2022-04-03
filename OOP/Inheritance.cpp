#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Mon Feb 14 2022 (Happy Valentine's Day)
 *  File : Inheritance.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class A{

int a;
public:
    void set_Value(int x){
        a = x;
    }
    A(int x){
        cout<<"I am the Constructor of Class A"<<endl;
        a = x;
    }
    void show_data_A(){
        cout<<"The value of a is :"<<a<<endl;
    }
    ~A(){
        cout<<"I am the Destructor of Class A"<<endl;
    }
};
class B : public A{

int p,q;
public:
    void set_data(int k){
        set_Value(k);
    }
    B(int x, int y):A(y){
        cout<<"I am the Constructor of Class B"<<endl;
        p = x;
    }
    void show_data_B(){
        cout<<"The value of p is :"<<p<<endl;
    }
    ~B(){
        cout<<"I am the Destructor of Class B"<<endl;
    }
};
class C : public B{

    int x;
    public:
        void set_something(int f){
            set_data(f);
        }
        C(int x, int y): B(x,y){
            cout<<"I am the Constructor of Class C"<<endl;
        }
        void show_data(){
            cout<<"The value of x is :"<<x<<endl;
        }
    ~C(){
            cout<<"I am the Destructor of Class C"<<endl;
        }
};
int main(){
    B b(2,3);
    b.show_data_B();
    b.show_data_A();
    return 0;
}