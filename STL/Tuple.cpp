#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Sat Feb 19 2022
 *  File : Tuple.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    tuple <string,int ,int> t1;
    t1 = make_tuple("Rohit",22, 12);                 // Make_tuple() Member Function
    cout<<get<0>(t1)<<endl;                          // get<>() Member Function
    cout<<get<1>(t1)<<endl;
    cout<<get<2>(t1)<<endl;

    return 0;
}