#include <bits/stdc++.h>
using namespace std;

int find(int n){
    int s=0;
    int end=n;
    int target=n;
    int mid=(s+end)/2;
    int ans=-1;
    while(s<=end){
        if(mid*mid==target){
            return mid;
        }
        else if(mid*mid>target){
            end=mid-1;
        }
        else{
            //store ans
            ans=mid;
            //right search
            s=mid+1;
        }
       mid=(s+end)/2; 
    }
    return ans;
}

int main() {
int n;
cin>>n;
int ans=find(n);
// cout<<"Ans is "<<ans;
int precision;
cin>>precision;
double finalans=ans;
double step=0.1;
for(int i=0; i<precision; i++){
    for(double j=finalans; j*j<=n; j+step){
        finalans=j;
    }
    step=step/10;
}
cout<<"Final ans is "<<finalans<<endl;
}