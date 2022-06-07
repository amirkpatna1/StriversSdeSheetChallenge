#include <bits/stdc++.h> 
using namespace std;


int majorityElement(vector<int>& v) {
        int val=v[0];
        int cnt=1;
        for(int i=1;i<v.size();i++){
            if(v[i]!=val){
                cnt--;
            }
            else cnt++;
            if(cnt<=0){
                val=v[i];
                cnt=1;
            }
        }
        return val;
    }

int main(){
  
}
