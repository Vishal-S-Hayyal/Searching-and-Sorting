#include <bits/stdc++.h>
using namespace std;

int firstocc(vector<int> v, int target){
    int start=0;
    int end=v.size()-1;
    int ans=-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(v[mid]==target){
            //2 kam karna hai 1st occurance ke liye left me dekhna hai;
            ans=mid;
            end=mid-1;
        }
        else if(target<v[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main() {
vector<int> v{1,2,3,4,4,4,4,6,7,8,};
int target = 4;
int index = firstocc(v,target);
cout<<"found first at index "<<index<<endl;
auto ans2=lower_bound(v.begin(),v.end(),4);
cout<<ans2-v.begin();
return 0;
}