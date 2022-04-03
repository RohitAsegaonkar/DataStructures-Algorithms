#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Sat Feb 19 2022
 *  File : Array.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    array <int,5> arr = {2,5,3,7,1};
    cout<<arr.at(2)<<endl;                               // at() Member Function
    cout<<arr[2]<<endl;                                  // Normal array element access
    cout<<arr.front()<<endl;                             // front() Member Function
    cout<<arr.back()<<endl;                              // back() Member Function
    arr.fill(8);                                         // fill() Member FUnction
    for(int i = 0; i<5 ; i++){                           
        cout<<arr[i];
    }
    cout<<endl;
    array <int,5> arr2 = {2,5,3,7,1};
    arr.swap(arr2);                                       // swap() Member Function
    cout<<"arr:";
    for(int i = 0; i<5 ; i++){                           
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"arr2:";
    for(int i = 0; i<5 ; i++){                           
        cout<<arr2[i];
    }
    cout<<endl;
    cout<<"Size of array is "<<arr.size()<<endl;           // size() Member Function
    return 0;

    /* begin() and end() are iterators */
}