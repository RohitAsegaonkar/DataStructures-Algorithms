#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Fri Feb 18 2022
 *  File : Exception_Handling.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    cout << "WELCOME" <<endl;
    try
    {
        throw "hi";
        cout << "INSIDE TRY" << endl;
    }
    catch(...)
    {
        cout<<"Exception handled : "<<endl;
    }
    
    cout << "ANTIM" << endl;
    
    return 0;
}