#include <bits/stdc++.h>
using namespace std;

int findpivot(vector<int> &arr){
    int s=0;
    int e=arr.size()-1;
    int m= s + (e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }
        if(m<=e && arr[m]>arr[m+1]){
            return m;
        }
        if(m-1>=s && arr[m]<arr[m-1]){
            return m-1;
        }
        if(arr[s]>arr[m]){
            e=m-1;
        }
        else{
            s=m+1;
        }
        m= s + (e-s)/2;
    }
    return -1;
}

int main() {
vector<int> arr{9,10,2,4,6,8};
int ans=findpivot(arr);
if(ans==-1){
    cout<<"Something is wrong"<<endl;
}
else{
    cout<<"The pivot of the array is at "<<ans<<endl;
    cout<<"value of answer is "<<arr[ans]<<endl;
}
return 0;

}