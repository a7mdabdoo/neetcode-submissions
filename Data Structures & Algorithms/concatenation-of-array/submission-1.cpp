class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int x=nums.size();
        vector<int> ans;
        for (int i=0;i<x;++i){
            ans.push_back(nums[i]);
        }
        for (int i=0;i<x;++i){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};