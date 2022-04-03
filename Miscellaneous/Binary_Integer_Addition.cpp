#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Fri Mar 04 2022
 *  File : Binary_Integer_Addition.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    int a[4] = {1,1,1,1} ,b[4] = {1,1,0,1},c[5];            // 15 + 13 = 28(11100)

    int carry =0;
    for(int i=4; i>=0; i--){
        c[i+1] = (a[i] + b[i] + carry) % 2;
        if((a[i] + b[i] + carry) >= 2){
            carry = 1;
        }
        else{
            carry = 0;
        }
    }
    c[0]=carry;
    for(int j=0; j<5; j++){
        cout<<c[j]<<" ";
    }
    return 0;
}