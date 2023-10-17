#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int target){
    int start=0; 
    int end=n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        int element = arr[mid];
        if(element == target){
            return mid;
        }
        else if(element>target){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start + (end-start)/2;;
    }
    return -1;
}

int main() {
int a[] = {2,4,6,8,10,12,16};
int size = 7;
int target = 17;
int index = binarysearch(a,size,target);

if(index == -1){
    cout<<"Not found"<<endl;
}
else{
    cout<<"Elemnet found at index "<<index;
}
 return 0;
}