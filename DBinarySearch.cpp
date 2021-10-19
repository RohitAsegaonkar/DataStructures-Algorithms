#include<bits/stdc++.h>
using namespace std;
//Partial Divide and Conquer algorithm.
//Binary Search is best when array is sorted and else Linear Search had to be done.
//Non-Recursive Binary Search with Stack Space O(logn).
int DBS(int *a, int i, int j, int x){
    int mid;
    if(i==j){
        if(a[i]==x){
            return(i);
        }
        else
            return(-1);
    }
    else{
        mid = (i+j)/2;
        if(x==a[mid])
            return(mid);
        else{
            if(x < a[mid])
                return(DBS(a,i,mid-1,x));
            else
                return(DBS(a,mid+1,j,x));
        }
    }
    
}
int main(int argc, char const *argv[])
{
int x;
int a[7]={50,60,70,80,90,100,110};
x = DBS(a,0,6,80);
cout<<"Element is at: "<<x<<endl;
    return 0;
}