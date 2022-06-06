#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void rotate(vector<vector<int>>& v) {
    int n=v.size();
    for(int i=0;i<n;i++){
       for(int j=0;j<i;j++)swap(v[i][j],v[j][i]);
    }
    for(auto &vv:v)reverse(vv.begin(),vv.end());
}

int main(){

    
}
