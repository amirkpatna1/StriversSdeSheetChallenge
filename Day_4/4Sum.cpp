#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

typedef long long ll;
    vector<vector<int>> fourSum(vector<int>& v, int target) {
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        int n=v.size();
        for(int i=0;i<n-3;i++){
            if(i>0 && v[i]==v[i-1])
                continue;
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && v[j]==v[j-1])
                    continue;
                int k=j+1,l=n-1;
                while(l>k){
                    long long s=ll(v[i])+ll(v[j])+ll(v[k])+ll(v[l]);
                    if(s>target)
                        l--;
                    else if(s<target)
                        k++;
                    else{
                        vector<int> v1={v[i],v[j],v[k],v[l]};
                        ans.push_back(v1);
                        k++;
                        while(k<l && v[k]==v[k-1])k++;
                        while(k<l && v[l]==v[l-1]) l--;
                        // k++;
                    }
                    
                }
                
                
            }
            
        }
        return ans;
    }

int main(){
  
}
