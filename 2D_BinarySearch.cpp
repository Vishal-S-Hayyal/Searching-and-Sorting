#include <bits/stdc++.h>
using namespace std;

pair<int, int> search(vector<vector<int>>& v, int target) {
    int s = 0;
    int row = v.size();
    int col = v[0].size();
    int e = (v.size() * v[0].size()) - 1;
    int mid = (s + e) / 2;
    
    while (s <= e) {
        int i = mid / col;
        int j = mid % col;
        
        if (v[i][j] == target) {
            return make_pair(i, j);
        } else if (v[i][j] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        
        mid = (s + e) / 2;
    }
    
    // Return a special pair to indicate that the target was not found.
    return make_pair(-1, -1);
}

int main() {
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    int target = 7;
    
    pair<int, int> ans = search(v, target);
    
    if (ans.first != -1) {
        cout << "Target found at row " << ans.first << " and column " << ans.second << endl;
    } else {
        cout << "Target not found." << endl;
    }
    
    return 0;
}
