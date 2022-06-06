#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& v) {
    vector<vector<int>> ans;
    sort(v.begin(),v.end());
    int start=v[0][0],end=v[0][1];
    for(int i=1;i<v.size();i++){
        if(v[i][0]<=end)end=max(end,v[i][1]);
        else ans.push_back({start,end}),start=v[i][0],end=v[i][1];
    }
    ans.push_back({start,end});
    return ans;
}

int main(){
  
}
