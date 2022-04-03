#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Tue Feb 15 2022
 *  File : template.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
template <class X, class Y> X fun(X a, Y b){
    if (a>b){
        return(a);
    }
    else{
        return(b);
    }
}
int main(){
    cout<<fun(4,8)<<endl;
    cout<<fun(5.5, 8.9)<<endl;
    cout<<fun(4, 4.9)<<endl;
    return 0;
}