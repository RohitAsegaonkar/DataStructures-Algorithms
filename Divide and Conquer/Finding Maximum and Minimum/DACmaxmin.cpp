#include<bits/stdc++.h>
using namespace std;
struct res{
    int max;
    int min;
};
 res DACmaxmin(int a[], int i, int j){
    int mid;
    res s0,s1,s2;
    if(i==j){
        s0.max = s0.min = a[i];
        return s0 ;
    }
    if(i==j-1){    
        if(a[i]>a[j]){
            s0.max = a[i];
            s0.min = a[j];
        }
        else{
            s0.max = a[j];
            s0.min = a[i];
        }
        return(s0);        
    }
    else{
        mid = (i + j)/2;
        s1 = DACmaxmin(a,i,mid);
        s2 = DACmaxmin(a,mid+1,j);
        if(s1.max<s2.max){
            s0.max=s2.max;
        }
        else{
            s0.max=s1.max;
        }
        if(s1.min>s2.min){
            s0.min=s2.min;
        }
        else{
            s0.min = s1.min;
        }
    }
return(s0);
}
int main(){

int a[7]= {50,70,20,60,30,180,10};
res s;

s = DACmaxmin(a,0,6);
cout<<s.max<<" "<<s.min<<endl;
    return 0;
}