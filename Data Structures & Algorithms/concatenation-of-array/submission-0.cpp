class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int x= nums.size();
        vector<int> ans(x * 2);
        for (int i=0;i<x;++i){
            nums.push_back(nums[i]);
        }
        for (int i=0;i<x * 2;++i){
            ans[i] = nums[i];
        }
    
        return ans;
    }
};