#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Thu Feb 17 2022
 *  File : typeconversion1.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class Item {
    int a,b;
    public:
        Item(){}                                       //Default Constructor
/*        Item(Product p){                             // Constructor used for type conversion
            a = p.getM();
            b = p.getN();
        }*/
        void setdata(int x, int y){
            a = x;
            b = y;
        }
        void showdata(){
            cout<< a << " & " << b << endl;
        }
};
class Product {
    int m,n;
    public:
        void setdata(int x, int y){
            m = x;
            n = y;
        }
        void showdata(){
            cout<< m << " & " << n << endl;
        }
        int getM(){
            return(m);
        }
        int getN(){
            return(n);
        }
        operator Item(){                                   // Casting Operator used for type conversion
            Item temp;
            temp.setdata(m,n);
            return(temp);
        }
};
int main(){
    Item i1;
    Product p1;
    p1.setdata(3,5);
    i1 = p1;                                           // ERROR if not type converted
    i1.showdata();
    return 0;
}