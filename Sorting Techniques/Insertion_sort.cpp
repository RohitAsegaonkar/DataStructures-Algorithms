#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Thu Mar 03 2022
 *  File : Insertion_sort.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    int a[6] = {7,6,5,4,3,2};
    int key,i;
    for(int j =1; j<6; j++){
        key = a[j];
        i = j-1;
        while(i>=0 & a[i] > key){                       // Ascending Order 
            a[i+1] = a[i];
            i = i-1;
            cout<<"Hello"<<endl;
        }
        a[i+1] = key;
    }
    for(int k = 0; k< 6; k++){
        cout<<a[k]<<" ";
    }
    return 0;
}