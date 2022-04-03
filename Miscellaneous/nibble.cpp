#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Tue Mar 01 2022
 *  File : process.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    unsigned int t;
    cin>>t;
    if(t<=100){
    while(t--){
        unsigned int n, a[n], r,i;
        cin>>n;
        for(i = 0; i<n ; ++i){
            cin>>a[i];
        }
        for(i =0; i<n; ++i){
            if(r <= a[i]){
                cout<<a[i]<<endl;
                break;
            }
            else{
                cout<<r<<endl;
                break;
            }
        }
    }
    }
    return 0;
}