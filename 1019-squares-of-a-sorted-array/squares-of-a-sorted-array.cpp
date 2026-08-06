class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector <int> ans(n);
        int i=0;
        int j= n-1;
        int index = n-1;

        while(i<=j){
            int ls= nums[i]*nums[i];
            int rs= nums[j]*nums[j];
            if(rs>ls){
                ans[index]=rs;
                j--;
            }
            else{
                ans[index]=ls;
                i++;
            }
            index--;
        }
    return ans;
    }
};