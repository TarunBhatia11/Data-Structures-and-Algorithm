class Solution {
public:

    void helper(vector<vector<int>>& ans, vector<int>& subset, unordered_set<int>& visited, vector<int> nums){
        if(subset.size() == nums.size()){
            ans.push_back(subset);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(visited.find(i) == visited.end()){

                if(i>0 && nums[i] == nums[i-1] && visited.find(i-1) == visited.end()) continue;
                visited.insert(i);
                subset.push_back(nums[i]);
                helper(ans, subset, visited, nums);
                subset.pop_back(); 
                visited.erase(i);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_set<int> visited;
        sort(nums.begin(), nums.end());

        vector<int> subset;
        helper(ans, subset, visited, nums);
        return ans;
    }
};
