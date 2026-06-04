#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;

        for(int i = 0; i < n-1; i++){

            int val = target - nums[i];

            for(int j = i+1; j < n; j++){

                if(val == nums[j]){
                    ans.push_back(i);
                    ans.push_back(j);

                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,7,10,15};
    int target = 9;

    vector<int> ans = s.twoSum(nums,target);

    for(int i : ans){
        cout<<i<<" ";
    }
}