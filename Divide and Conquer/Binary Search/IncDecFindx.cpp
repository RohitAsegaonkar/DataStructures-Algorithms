#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Wed Oct 20 2021
 *  File : IncDecFindx.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
int BS(int *a, int i, int j){
    int mid;
    while(i<=j){
        if(i==j){
            if(a[i] > a[i+1] && a[i] > a[i-1])
                return(i);
            else
                return(-1);
        }
        else{
            mid = (i+j)/2;
            if(a[mid] > a[mid +1] && a[mid] > a[mid-1])
                return(mid);
            else{
                if(a[mid]<a[mid+1]){
                    i = mid+1;
                }
                else
                    j = mid-1;
            }
        }
    }
    return 0;
}
int main(){
int x;
int a[14]={10,20,30,40,50,60,70,80,70,60,50,40,30,20};
x = BS(a,0,13);
cout<<"Element with Point of inc & dec is at: "<<x<<endl;
    return 0;
}