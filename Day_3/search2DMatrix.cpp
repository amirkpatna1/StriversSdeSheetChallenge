#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& v, int key) {
        int n=v.size(),m=v[0].size(),l=0,r=m*n-1;
        // cout<<r<<endl;
        while(r>=l){
            int mid=(l+r)/2;
            // mid+=1;
            int row=mid/m;
            int col=mid%(m);
            // cout<<row<<" "<<col<<endl;
            // assert(row>=0 && col>=0);
            if(v[row][col]==key)return true;
            if(v[row][col]>key)r=mid-1;
            else l=mid+1;
        }
        return false;
    }

int main(){

    
}
