#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Fri Mar 04 2022
 *  File : Linear_Search.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    int a[6] = {5, 2, 4, 6, 1, 3};
    int v,k=-1;
    cin>>v;
    for(int i =0; i<6; i++){
        if(a[i]==v){
            k=i;
        }
    }
    if(k>-1){
        cout<<"Element Found at location: "<<k<<endl;
    }
    else{
        cout<<"Element not Found Here!"<<endl;
    }

    return 0;
}