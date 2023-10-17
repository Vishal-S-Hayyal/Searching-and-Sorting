#include <bits/stdc++.h>
using namespace std;

int divide(int dividend ,int divisor){
    int s=0;
    int e=abs(dividend);
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(abs(mid*divisor)<=abs(dividend)){
            ans=mid;
            s=mid+1;
        }
        if(abs(mid*divisor)>abs(dividend)){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    if((dividend>0 && divisor>0) || (dividend<0 && divisor<0)){
    return ans;}
    else{
        return -ans;
    }
}

int main() {
int dividend=100;
// cin>>dividend;
int divisor=-7;
// cin>>divisor;
int ans=divide(dividend,divisor);
cout<<ans<<endl;
}