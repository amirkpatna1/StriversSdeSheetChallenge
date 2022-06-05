#include <bits/stdc++.h> 

using namespace std;

void nextPermutation(vector<int>& v) {
    int n=v.size();
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break; 
        }
    }
    if(idx==-1){
        reverse(v.begin(),v.end());
        return;
    }
    int idx1=upper_bound(v.rbegin(),v.rend()-idx-1,v[idx])-v.rbegin();
    swap(v[idx],v[n-idx1-1]);
    reverse(v.begin()+idx+1,v.end());
 }

int main(){
  
  
}
