#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Tue Oct 19 2021
 *  File : EwSameP&V.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
int BS(int *a, int i, int j){
    int mid;
    while(i<=j){
        if(i==j){
            if(a[i]==i)
                return(i);
            else
                return(-1);
        }
        else{
            mid = (i+j)/2;
            if(a[mid]==mid)
                return(mid);
            else{
                if(mid<a[mid]){
                    j=mid-1;
                }
                else
                    i = mid+1;
            }
        }
    }
    return 0;
}
int main(){
int x;
int a[15]={-50,-40,-30,-5,-2,0,3,5,6,9,30,80,100,150,200};
x = BS(a,0,14);
cout<<"Element with a[i] == i is at: "<<x<<endl;
    return 0;
}