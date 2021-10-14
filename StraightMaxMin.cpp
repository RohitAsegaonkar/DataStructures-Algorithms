#include<bits/stdc++.h>
using namespace std;
/*Finding Max and Min of array in O(n) time complexity.
Can be done by sorting and also by using AVL Tree(not done yet)*/
int main(){

    int arr[8] = {50,70,60,45,35,25,75,12};
    int max, min;
    max,min = arr[0];

    for(int i=1;i<8;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Max="<<max<<" and Min="<<min<<endl;
    return 0;
}