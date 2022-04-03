#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Thu Mar 10 2022
 *  File : PandoraAdveturesReplyland.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    int i = 0,turn = 0, reward = 0, acc = 0;
    map <string, int> pandora = {{"stamina_initial",0},{"stamina_max",0},{"turns",0},{"demons",0}};
    vector<vector<int>> demons;
    int flag[pandora["demons"]] = {0};
    int t[pandora["demons"]] = {0};
    ifstream fin;
    fin.open("00-example.txt",ios::in);
    map <string, int> :: iterator itr = pandora.begin();
    while(itr!=pandora.end()){
        fin>>itr->second;
        itr++;
    }
    for (int j = 0; j < pandora["demons"]; j++)
    {   vector <int> row;
        int temp;
        while(fin>>temp){
            row.push_back(temp);
        }
        demons.push_back(row);
    }
    while(turn!=pandora["turns"]){

    }
    return 0;
}
int staminademon(int st, vector<vector<int>> v, int n, int t){
    for(int i =0; i < n; i++){
        if(st >= v[i][0]){
            st-=v[i][0];
        }
        if(t == v[i][1]){
            st += v[i][2];
        }
        
    }
}
int nxtdemon(int x, vector<vector<int>> v, int n){
    int max,i;
    max = x;
    for(i = 1; i < n; i++){
        if(v[i][0] > max && x >= v[i][0]){
            max = v[i][0];
        }
    }
}
