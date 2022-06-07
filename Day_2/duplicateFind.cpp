#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findDuplicate(vector<int>& v) {
        int ans=1;
        for(int i=0;i<v.size();i++){
            int idx=abs(v[i]);
            if(v[idx]<0){
                ans=idx;
                break;
            }
            v[idx]=-v[idx];
        }
        for(int i=0;i<v.size();i++)v[i]=abs(v[i]);
        return ans;
    }

int main(){
  
}
