#include <bits/stdc++.h>
using namespace std;
int weapons(int n, int P, vector<int> weapon)
{
    int flag[n] = {0};//solve here
    int rating=0,prev_rating =1000;
    int j = 0;
    while(rating >=0 && j >= 0){
        if(j>n-1){
        j=0;
        }
        if(P >= weapon[j] && flag[j]!=1){
            P = P - weapon[j];
            flag[j] = 1;
            rating++;
        }
        if((P < *min_element(weapon.begin(), weapon.end()) && flag[j]!= 1) && rating >=0){
            P = P + weapon[j];
            flag[j] = 1;
            rating--;
        }
        j++;
        if(prev_rating == rating){
            j =-2;
        }
        prev_rating = rating;
        }
    
    return rating;
}

int main()
{
    int n, P;
    cin >> n >> P;
    vector<int> weapon(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weapon[i];
    }
    cout << weapons(n, P, weapon);
}