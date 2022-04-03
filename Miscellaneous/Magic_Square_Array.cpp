#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Fri Mar 04 2022
 *  File : Magic_Square_Array.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
int MagicSquare(int *a, int n){
    int count = 0;
    int arr[n];
    for(int i = 0; i<n; i++){
        for(int j =0 ; j<n; j++){
            arr[0] = a[i];
            if(i==j){
                cout<<arr[j]<<" ";
                continue;
            }
            arr[j] = a[j];
            cout<<arr[j]<<" ";
        }
        cout<<endl;

    }
    return count;
}
int main(){
    int a[3] = {1,24,3};
    cout<<MagicSquare(a,3);
    return 0;
}