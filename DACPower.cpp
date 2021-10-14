#include<bits/stdc++.h>
using namespace std;

int DACPower(int a, int n){
    long double b,mid;
    if(n==1)
        return(a);
    else{
        mid = n/2;
        b = DACPower(a,mid);
        return(b*b);
    }
}
int main(int argc, char const *argv[])
{
    cout<<DACPower(2,32)<<endl;
    cout<<pow(2.0,32.0)<<endl;
    return 0;
}
