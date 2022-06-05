#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int maxSubArray(vector<int>& v) {
    int res=-1e9,ans=-1e9;
    for(auto x:v){
        res=max(x,x+res);
        ans=max(ans,res);
    }
    return ans;
}

int main(){
  
  
}
