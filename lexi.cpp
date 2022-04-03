#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Fri Oct 22 2021
 *  File : Asach.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    unsigned int t;
    cin>>t;
    string a,b;
    int n;
    cin>>n;
    int l=0,r=1;
    cin.ignore();
    while(t--){
        getline(cin,a);
        for(l=0;l<r;l++){
            for(r=l+1;r<n;r++){
                b = a.substr(l,r);
                reverse(b.begin(),b.end());
                b = a.substr(0,l-1) + b + a.substr(r+1,n);
                cout<<b<<endl;
            }
        }
        }
}

