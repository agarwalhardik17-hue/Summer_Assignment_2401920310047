#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int n = nums.size();

        while(j<n){

            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i+1;
        
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,1,2,2,3,4,4,5};

    int ans = s.removeDuplicates(nums);

    cout<<"Length of array after removing duplicates: "<<ans<<endl;

    cout<<"Array after removing duplicates: ";
    for(int i=0; i<ans; i++){
        cout<<nums[i]<<" ";
    }
}