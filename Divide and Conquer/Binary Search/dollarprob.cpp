#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Thu Oct 21 2021
 *  File : dollarprob.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
int BS(int *a){
    int mid,i=1,j;
    while(a[i]!='#'){
        i *= 2;
    }
    j=i;
    i=0;
    while(i<=j){
        if(i==j){
            if(a[i] == '#' && a[i-1]!= '#')
                return(i);
            else
                return(-1);
        }
        else{
            mid = (i+j)/2;
            if(a[mid] == '#' && a[mid-1]!= '#' )
                return(mid);
            else{
                if(a[mid] == '#' && a[mid-1] == '#'){
                    j = mid - 1;
                }
                else
                    i = mid +1;
            }
        }
    }
    return 0;
}
int main(){
int x;
int a[]={30,50,-10,-20,-5,60,70,'#','#','#','#','#','#','#','#','#','$','$','$','$','$','$','$','$','$','$','$','$','$','$'};
x = BS(a);
cout<<"Element with Point of First Inf is at: "<<x<<endl;
    return 0;
}