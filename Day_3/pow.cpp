#include <bits/stdc++.h> 
using namespace std;


double myPow(double x, int n) {
        double res=1;
        bool sign=n>0?true:false;
        long m=labs(n);
        while(m){
            if(m&1)res=res*x;
            x=x*x;
            m>>=1L;
        }
        return sign?res:1/res;
    }

int main(){
  
}
