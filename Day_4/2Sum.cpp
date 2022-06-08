#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& v, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<v.size();i++){
            if(mp.count(v[i]))return {mp[v[i]],i};
            mp[target-v[i]]=i;
        }
        return {};
    }

int main(){

    
}
