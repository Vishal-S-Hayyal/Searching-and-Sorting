#include <bits/stdc++.h>
using namespace std;

int Search(vector<int> v, int target){
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(v[mid]==target){
            return mid;
        }
        if(mid-1 >=0 && v[mid-1]==target){
            return mid-1;
        }
        if(mid + 1 < v.size() && v[mid+1]==target){
            return mid+1;
        }
        if(v[mid]>target){
            //left search
            e=mid-2;
        }
        else{
            s=mid+2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main() {
vector<int> v = {10,3,40,20,50,70,80};
int target = 10;
int index = Search(v,target);
cout<<"Target found at "<<index<<endl;
}