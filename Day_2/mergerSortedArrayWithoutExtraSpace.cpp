#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int nextGap(int gap){
        if(gap<=1)return 0;
        return gap/2+gap%2;
    }
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        int i,j,gap=m+n;
        for(gap=nextGap(gap);gap;gap=nextGap(gap)){
            for(i=0;i+gap<m;i++){
                if(v1[i]>v1[i+gap])
                    swap(v1[i],v1[i+gap]);
            }
            for(j=gap>m?gap-m:0;i<m && j<n;j++,i++){
                if(v1[i]>v2[j])
                    swap(v1[i],v2[j]);
            }
            if(j<n)
            for(;j+gap<n;j++){
                if(v2[j]>v2[j+gap])
                    swap(v2[j],v2[j+gap]);
            }
        }
        // for(i=v2.size()-1,j=v1.size()-1;i>=0;i--,j--){
        //     v1[j]=v2[i];
        // }
        for(i=0;i<m;i++)cout<<v1[i]<<" ";
        for(j=0;j<n;j++)cout<<v2[j]<<" ";
        j=0;
        for(i=m;i<m+n;i++,j++)v1[i]=v2[j];
        // cout<<endl;
    }

int main(){
  
}
