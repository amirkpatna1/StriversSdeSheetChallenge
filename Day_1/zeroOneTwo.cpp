#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sortColors(vector<int>& v) {
    int zeros=0,ones=0,twos,n=v.size();
    for(int &x:v)ones+=x==1,zeros+=x==0;
    for(int i=0;i<n;i++){
        if(i<zeros)v[i]=0;
        else if(i-zeros<ones)v[i]=1;
        else v[i]=2;
    }
}

int main(){
  
}
