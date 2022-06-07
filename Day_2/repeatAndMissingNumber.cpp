#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;
vector<int> Solution::repeatedNumber(const vector<int> &v) {
    ll n=v.size();
    ll s=0,sq=0;
    for(int x:v)s+=ll(x),sq+=ll(x)*ll(x);
    ll ss=n*(n+1LL)/2LL;
    ll sqq=0;
    for(ll i=1;i<=n;i++) sqq+=i*i;
    ll diff=s-ss;
    ll diffsq=sq-sqq;
    ll add=diffsq/diff;
    int repeat=(diff+add)/2LL;
    s-=repeat;
    return {repeat,int(ss-s)};
}
int main(){
  
}
