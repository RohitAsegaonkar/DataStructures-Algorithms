#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Wed Feb 16 2022
 *  File : Initializers.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class Dummy{
    public:
    int a, b;
    const int k;                                     // non-static const data member
    int &y;                                          // reference member : Both need initialization in Initializers List.

    Dummy(int &n):a(5),b(6),y(n),k(3)
    {
    }
};
int main(){
    int m = 8;
    Dummy d1(m);
    cout<<d1.k<<endl;
    return 0;
}