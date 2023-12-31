#include<bits/stdc++.h>
using namespace std;

class Solution {
    private: 

    void getPermutations(vector<int> nums, vector<vector<int>> &ans, int index){
        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }

        //processing
        for(int j = index; j<nums.size(); j++){
            swap(nums[index],nums[j]);
            getPermutations(nums, ans, index +  1);
            //backtrack
            swap(nums[index], nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getPermutations(nums, ans, 0);
        return ans;
    }
};