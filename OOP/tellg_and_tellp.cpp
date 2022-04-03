#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Tue Feb 15 2022
 *  File : tellg_and_tellp.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    
    ofstream fout;
    fout.open("tellg_and_tellp.txt", ios::app);
    int pos = 0;
    pos = fout.tellp();
    cout<<pos<<endl;
    return 0;
}