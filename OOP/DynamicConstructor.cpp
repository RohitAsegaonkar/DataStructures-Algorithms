#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Fri Feb 18 2022
 *  File : DynamicConstructor.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class A{
    int a,b,*p;
    public: 
        A(){                                           // Default Constructor
            a = 0; b = 0;
        }                                          
        A(int x, int y, int z){                        // Dynamic Constructor
            a = x;
            b = y;
            p = new int;
            *p = z;
        }                                      
};
int main(){
    A o1,o2,o3(3,4,5);
    return 0;
}