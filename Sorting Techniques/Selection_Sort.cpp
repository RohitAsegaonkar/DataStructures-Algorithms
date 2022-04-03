#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Sun Mar 06 2022
 *  File : Selection_Sort.cpp                        // Θ(n^2). Time Complexity
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    int a[7] = {8,7,6,5,4,3,2};
    int n = 7;
    int temp;
    for(int i = 0; i<n-1; i++){
        temp = a[i];
        for(int j=i+1; j<n; j++){
            if(temp > a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                cout<<"Hello"<<endl;
            }
        }
    }
    for (int k = 0; k<n; k++){
        cout<<a[k]<<" ";
    }
    return 0;
}