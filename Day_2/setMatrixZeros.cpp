#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void setZeroes(vector<vector<int>>& v) {
    int col0=0,row0=0,n=v.size(),m=v[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==0){
                row0=row0 || i==0;
                col0=col0 || j==0;
                v[0][j]=0;
                v[i][0]=0;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(v[i][0]==0 || v[0][j]==0)v[i][j]=0;
        }
    }
    // cout<<row0;
    if(row0){
        for(int i=0;i<m;i++)v[0][i]=0;
    }
    if(col0){
        for(int j=0;j<n;j++)v[j][0]=0;
    }
}

int main(){

    
}
