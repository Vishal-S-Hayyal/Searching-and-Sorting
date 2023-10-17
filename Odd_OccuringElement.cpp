#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        //single element
        if(s==e){
            return s;
        }
        //2 cases (mid is at odd or even)
        //even
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        //odd
        else{
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main() {
vector<int> arr = {1,1,2,2,3,3,4,4,3,600,600,4,4};
int ans = solve(arr);
cout<<"Index of the element is "<<ans<<endl;
cout<<"The elment is "<<arr[ans]<<endl;
}