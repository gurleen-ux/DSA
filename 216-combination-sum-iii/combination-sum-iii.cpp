class Solution {
public:
    vector<vector<int>> ans;
    void solve(int k, int target, int index,vector<int>& temp) {
        // Exactly k numbers selected
        if(k == 0) {
            if(target == 0)
                ans.push_back(temp);
            return;
        }
        // Target became negative
        if(target < 0)
            return;
        // Try numbers from index to 9
        for(int i = index; i <= 9; i++) {
            temp.push_back(i);  // Choose          
            solve(k - 1,target - i,i + 1,temp);// Explore
            temp.pop_back();// Undo
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        solve(k, n, 1, temp);
        return ans;
    }
};