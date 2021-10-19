#include<bits/stdc++.h>
using namespace std;

int DACPower(int a, int n){
    long double b,mid,c;
    if(n==1)
        return(a);
    else{
        mid = n/2;
        b = DACPower(a,mid);
        c = b*b;
        if(n%2==0)
            return(c);
        else
            return(a*c);
    }
}
int main(int argc, char const *argv[])
{
    cout<<DACPower(2,5)<<endl;
    cout<<pow(2.0,7.0)<<endl;
    return 0;
}
