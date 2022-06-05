#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void func(vector<vector<int>> &ans,vector<int> &v){
    vector<int> tmp={1};
    for(int i=0;i<v.size()-1;i++){
        tmp.push_back(v[i]+v[i+1]);
    }
    tmp.push_back(1);
    ans.push_back(tmp);
}
vector<vector<int>> generate(int n) {
    vector<vector<int>> ans={{1}};
    for(int i=0;i<n-1;i++)func(ans,ans.back());
    return ans;
}

int main(){

}
