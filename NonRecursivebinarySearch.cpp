#include<bits/stdc++.h>
using namespace std;
//Partial Divide and Conquer algorithm.
//Binary Search is best when array is sorted and else Linear Search had to be done.
//Non-Recursive Binary Search with Stack Space O(1).
int BS(int *a, int i, int j, int x){
    int mid;
    while(i<=j){
        if(i==j){
            if(a[i]==x)
                return(i);
            else
                return(-1);
        }
        else{
            mid = (i+j)/2;
            if(a[mid]==x)
                return(mid);
            else{
                if(x<a[mid]){
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
int a[7]={50,60,70,80,90,100,110};
x = BS(a,0,6,60);
cout<<"Element is at: "<<x<<endl;
    return 0;
}